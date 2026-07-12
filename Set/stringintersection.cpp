#include <bits/stdc++.h>
using namespace std;

int main() {

    set < char > s, s2, s3;

    int n;
    char x;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s2.insert(x);
    }
    int m;
    char y;
    cin>>m;
    for (int i = 1; i <= m; i++) {
        cin >> y;
        s3.insert(y);
    }

    for (int v: s2) {
        if (s3.find(v) != s3.end()) {
            s.insert(v);
        }
    }
    cout << s.size() << endl;
}