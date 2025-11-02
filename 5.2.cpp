#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *next;

    node(int d) {
        data = d;
        next = NULL;
    }
};

// Function to insert node at the end
void insertEnd(node* &head, int d) {
    node* newNode = new node(d);
    if (head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Function to print the linked list
void print(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to count occurrences and delete all nodes with the given key
int findcountAndDelete(node* &head, int key) {
    int count = 0;
    node* temp = head;
    node* prev = NULL;

    while (temp != NULL) {
        if (temp->data == key) {
            count++;

            // Delete the node
            if (prev == NULL) {
                head = temp->next;
                delete temp;
                temp = head;
            } else {
                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
    return count;
}

int main() {
    node* head = NULL;

    // Create linked list: 1->2->1->2->1->3->1
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 1);
    insertEnd(head, 2);
    insertEnd(head, 1);
    insertEnd(head, 3);
    insertEnd(head, 1);

    cout << "Original Linked List: ";
    print(head);

    int key = 1;
    int count = findcountAndDelete(head, key);

    cout << "Number of occurrences of " << key << ": " << count << endl;

    cout << "Linked List after deleting " << key << ": ";
    print(head);

    return 0;
}
