#include <climits>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

bool isBST(Node* root, int minVal, int maxVal) {
    if (root == nullptr)
        return true;

    if (root->data <= minVal || root->data >= maxVal)
        return false;

    return isBST(root->left, minVal, root->data) &&
           isBST(root->right, root->data, maxVal);
}

bool isBST(Node* root) {
    return isBST(root, INT_MIN, INT_MAX);
}
int main()
{
    return 0;
}