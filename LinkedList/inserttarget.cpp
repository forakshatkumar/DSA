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

Node* insertAttarget(Node *head, int value) {
    int target = 20;
    Node *newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
        newNode -> next = nullptr;
    }
    Node *temp = head;
    while(temp != nullptr && temp->data != target){
        temp = temp -> next;
    }
    newNode->next = temp -> next;
    temp -> next = newNode;
    return head;
}

int main() {
    Node *head = nullptr;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original list: ";
    Display(head);

    head = insertAttarget(head, 5);

    cout << "After inserting 5 at target: ";
    Display(head);

    return 0;
}