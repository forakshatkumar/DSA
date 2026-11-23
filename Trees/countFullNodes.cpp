#include <iostream>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;

    node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
int countNode(node* root) {
    if (root == nullptr) {
        return 0;
    }

    int count = 0;
    if (root->left != nullptr && root->right != nullptr) {
        count = 1;
    }
    count += countNode(root->left);
    count += countNode(root->right);
    return count;
}

int main() {
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);

    cout << "Full nodes: " << countNode(root) << "\n";

    return 0;
}
