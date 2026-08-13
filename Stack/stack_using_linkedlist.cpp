#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *Next;
};
Node *top = NULL;

void push(int a)
{
    Node *newNode = new Node;
    newNode->data = a;
    newNode->Next = top;
    top = newNode;
}

void pop()
{
    if (top == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        Node *temp = top;
        cout << top->data;
        top = top->Next;
        delete temp;
    }
}

void display()
{
    Node *temp = top;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
}

void peak()
{
    if (top == NULL)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << top->data << endl;
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
        push(x);
    }
    cout << "Stack elements : ";
    display();
    cout << endl;
    cout << "Peak element : ";
    peak();

    cout << "Deleting element : ";
    pop();
    cout << endl;
    cout << "Element after deleting : ";
    display();
    cout << endl;
    cout << "Akshat Kumar " << endl;
    return 0;
}