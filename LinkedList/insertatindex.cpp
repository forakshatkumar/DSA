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

Node* insertAtindex(Node *head, int value) {
    int index = 0;
    Node *newNode = new Node(value);
    if (index == 0) {
        newNode -> next = head;
        head = newNode;
        return head;
    }
    Node *temp = head;
    int ci = 1;
    while(temp != nullptr && ci < index){
        temp = temp -> next;
        ci += 1;
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

    head = insertAtindex(head, 40);

    cout << "After inserting 40 at index: ";
    Display(head);

    return 0;
}