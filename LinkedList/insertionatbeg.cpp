#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void Display(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* insertAtBeg(Node *head, int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
        newNode->next = nullptr;
        return newNode;
    }
    newNode->next = head;
    head = newNode;
    return head;
}

int main() {
    Node *head = nullptr;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original list: ";
    Display(head);

    head = insertAtBeg(head, 5);

    cout << "After inserting 5 at beginning: ";
    Display(head);

    return 0;
}