#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node *prev;
    Node(int value) {
        data = value;
        next = nullptr;
        prev = nullptr;
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
        newNode->prev = nullptr;
        newNode->next = nullptr;
        head = newNode;
        return head;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

int main() {
    Node *head = nullptr;
    int x;
    cin>>x;
    head = new Node(x);
    Node *temp;
    temp = head;
    int n;
    cin>>n;
    for(int i =1; i<=n; i++){
        cin>>x;
        temp->next = new Node(x);
        temp = temp->next;
    }

    cout << "Original list: ";
    Display(head);

    head = insertAtBeg(head, 60);

    cout << "After inserting 60 at beginning: ";
    Display(head);

    return 0;
}