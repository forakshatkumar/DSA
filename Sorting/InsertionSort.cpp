#include <bits/stdc++.h>
using namespace std;

int main() {
    // Insertion sort
    int n;
    cin >> n;
    int A[n];
    for (int i = 1; i <= n; i++) {
        cin >> A[i];
    }
    for (int k = 1; k <= n; k++) {
        int t = A[k];
        int p = k - 1;
        while (t < A[p] && p > 0) {
            A[p + 1] = A[p];
            p = p - 1;
        }
        A[p + 1] = t;
    }
    cout << "Sorted Array : ";
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}