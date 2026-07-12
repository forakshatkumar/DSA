#include <bits/stdc++.h>

using namespace std;

class Node {
    public: int data;
    Node * next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void Display(Node * head) {
    Node * temp;
    temp = head;
    while (temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}

int main() {
    Node * head;
    head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    Display(head);
}