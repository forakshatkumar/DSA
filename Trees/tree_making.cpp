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

void Inorder(node* root) {
    if (root == nullptr) {
        return;
    }
    Inorder(root->left);
    cout << root->data << ' ';
    Inorder(root->right);
}

void PreOrder(node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << ' ';
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(node* root) {
    if (root == nullptr) {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << ' ';
}

int main() {
    node* root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);

    cout << "Inorder: ";
    Inorder(root);
    cout << "\nPreorder: ";
    PreOrder(root);
    cout << "\nPostorder: ";
    PostOrder(root);
    cout << '\n';

    return 0;
}