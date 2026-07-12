#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, target;
    cin >> n;
    cin >> target;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int count = 0;
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            int sum = A[j] + A[k];
            if (sum == target) {
                count = count + 1;
            }
        }
    }
    if (count == 0) cout << "No" << endl;
    else cout << "Yes" << endl;
    
    cout << count << endl;
    return 0;
}