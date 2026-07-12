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
    Node *temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int search(Node *head, int item)
{
    Node *temp;
    temp = head;
    while (temp != nullptr)
    {
        if (temp->data == item)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{
    Node *head;
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    Display(head);
    int x = search(head, 20);
    if (x == 1)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}