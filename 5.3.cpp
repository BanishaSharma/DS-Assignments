#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

// Function to insert a node at the end
void insertEnd(Node* &head, int d) {
    Node* newNode = new Node(d);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL)
            cout << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Function to find the middle of the linked list
void findMiddle(Node* head) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    Node* slow = head;  // moves one step at a time
    Node* fast = head;  // moves two steps at a time

    // When fast reaches end, slow will be at the middle
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element is: " << slow->data << endl;
}

int main() {
    Node* head = NULL;

    // Input: 1->2->3->4->5
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 3);
    insertEnd(head, 4);
    insertEnd(head, 5);

    cout << "Linked List: ";
    printList(head);

    findMiddle(head);

    return 0;
}
