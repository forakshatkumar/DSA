#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int Arr[n];
    for (int i = 1; i <= n; i++) {
        cin >> Arr[i];
    }
    for (int j = 1; j <= n - 1; j++) {
        int min = j;
        for (int k = j + 1; k <= n; k++) {
            if (Arr[k] < Arr[min]) {
                min = k;
            }
        }
        int t = Arr[j];
        Arr[j] = Arr[min];
        Arr[min] = t;
    }
    for (int i = 1; i <= n; i++) {
        cout << Arr[i] <<" ";
    }
    return 0;
}