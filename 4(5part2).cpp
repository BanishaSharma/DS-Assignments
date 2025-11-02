#include <iostream>
#include <queue>
using namespace std;

class StackUsingOneQueue {
    queue<int> q;

public:
    void push(int x) {
        int n = q.size();
        q.push(x);

        // Rotate previous elements behind the new one
        for (int i = 0; i < n; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    void pop() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        q.pop();
    }

    int top() {
        if (q.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    StackUsingOneQueue st;
    st.push(5);
    st.push(10);
    st.push(15);
    cout << "Top element: " << st.top() << endl; // 15
    st.pop();
    cout << "Top element after pop: " << st.top() << endl; // 10
    return 0;
}
