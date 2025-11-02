#include <iostream>
using namespace std;

#define SIZE 5

class Queue {
    int arr[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    bool isFull() {
        return (rear == SIZE - 1);
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue is Full!" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        arr[++rear] = x;
        cout << x << " inserted into queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << arr[front] << " removed from queue." << endl;
        front++;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }

    void peek() {
        if (isEmpty())
            cout << "Queue is Empty!" << endl;
        else
            cout << "Front element: " << arr[front] << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        cout << "\n--- Simple Queue Menu ---" << endl;
        cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Check if Empty\n6. Check if Full\n0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.peek();
            break;
        case 4:
            q.display();
            break;
        case 5:
            cout << (q.isEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;
            break;
        case 6:
            cout << (q.isFull() ? "Queue is Full" : "Queue is not Full") << endl;
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
