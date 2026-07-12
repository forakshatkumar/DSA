#include <bits/stdc++.h>

using namespace std;

bool fun(pair < int, int > p1, pair < int, int > p2) {
    return (p2.second > p1.second);
}
int main() {
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    map < int, int > m;
    for (int i: A) {
        m[i]++;
    }
    vector < pair < int, int >> v(m.begin(), m.end());
    sort(v.begin(), v.end(),fun);
    for (auto i: v) {
        cout << i.first << " " << i.second << endl;
    }
}