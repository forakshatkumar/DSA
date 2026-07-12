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

Node* insertAtEnd(Node *head, int value) {
    Node *newNode = new Node(value);
    if (head == nullptr) {
        newNode->prev = nullptr;
        newNode->next = nullptr;
        head = newNode;
        return head;
    }
    Node *temp = head;
    while(temp-> next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
    temp->next->prev = head;
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

    head = insertAtEnd(head, 9);

    cout << "After inserting 9 at End: ";
    Display(head);

    return 0;
}