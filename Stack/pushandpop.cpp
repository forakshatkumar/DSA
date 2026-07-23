#include <bits/stdc++.h>
using namespace std;

int s[5];
int top = -1;
int n;

void push(int a) {
    if (top == n - 1) {
        cout << "Overflow" << endl;
    } else {
        top++;
        s[top] = a;
    }
}

void pop() {
    if (top == -1) {
        cout << "Underflow" << endl;
    } else {
        cout << "Item popped: " << s[top] << endl;
        top--;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = 0; i <= top; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
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