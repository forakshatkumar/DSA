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

void* insertAtEnd(Node *&head, int value) {
    Node *newNode = new Node(value);
    newNode -> next = nullptr;
    if (head == nullptr) {
        head = newNode;
    }
    Node *temp = head;
    while(temp-> next != nullptr){
        temp = temp->next;
    }
    temp->next = newNode;
   // return head;
}

int main() {
    Node *head = nullptr;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    Display(head);
    insertAtEnd(head, 40);

    Display(head);

    return 0;
}