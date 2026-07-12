#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i <= n; i++) {
        cin >> A[i];
    }
    int pos = 0;
    int neg = 0;
    for (int j = 0; j <= n; j++) {
        if (A[j] % 2 == 0) {
            pos += 1;
        }
        else {
            neg += 1;
        }
    }
    cout << pos << " " << neg << " ";
    return 0;
}