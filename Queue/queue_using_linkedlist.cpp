#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *Next;
};
Node *front = NULL;
Node *rear = NULL;

void Enqueue(int a)
{
    Node *newNode = new Node;
    newNode->data = a;
    newNode->Next = NULL;
    if (front == NULL && rear == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->Next = newNode;
        rear = newNode;
    }
}

void Dequeue()
{
    if (front == NULL && rear == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        Node *temp = front;
        cout << front->data;
        front = front->Next;
        delete temp;
    }
}

void display()
{
    Node *temp = front;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
}

void peak()
{
    if (front == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << rear->data << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        Enqueue(x);
    }
    cout << "Stack elements : ";
    display();
    cout << endl;
    cout << "Peak element : ";
    peak();

    cout << "Deleting element : ";
    Dequeue();
    cout << endl;
    cout << "Element after deleting : ";
    display();
    cout << endl;
    cout << "Akshat Kumar " << endl;
    return 0;
}