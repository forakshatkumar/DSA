#include <bits/stdc++.h>
using namespace std;

int s[10];
int top = -1;
int n;

void push(int a) {
    if (top == n - 1) {
        cout << "Overflow" << endl;
    }
    else {
        top++;
        s[top] = a;
    }
}

void display() {
    if (top == -1) {
        cout << "stack is empty" << endl;
    }
    for (int i = 0; i <= top; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
}

void pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
    }
    else {
        cout << "Item popped : " << s[top] << endl;
        top--;
    }
}

void isempty() {
    if (top == -1) {
        cout << "stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }
}
void isfull() {
    if (top == n - 1) {
        cout << "stack is Full" << endl;
    }
    else {
        cout << "Stack is not Full" << endl;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        push(x);
    }
    display();
    for (int i = 0; i < n; i++) {
        pop();
    }
    display();
    return 0;
}


// write a program of stack having premitive operation , push, pop and display, isempty, isfull