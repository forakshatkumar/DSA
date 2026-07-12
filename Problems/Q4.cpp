#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int key;
    key = 4;
    for (int i = n; i > 0; i--) {
        if (A[i] == key) {
            cout << i << " ";
            break;
        }
    }
    for (int j = 0; j < n; j++) {
        if (A[j] == key) {
            cout << j << " ";
            break;
        }
    }
    return 0;
}