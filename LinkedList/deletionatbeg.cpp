#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

void Display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *deleteatbeg(Node *head)
{
    if (head == 0)
    {
        return nullptr;
    }
    else
    {
        head = head->next;
        return head;
    }
}

int main()
{
    Node *head = nullptr;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original list: ";
    Display(head);

    head = deleteatbeg(head);

    cout << "After deletion at beg : ";
    Display(head);

    return 0;
}