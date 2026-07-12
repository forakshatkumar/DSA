#include <bits/stdc++.h>
using namespace std;

int main() {

    set < int > s, s2, s3;

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }
    int m, y;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> y;
        s2.insert(y);
    }
    for(int v:s){
        if(s2.find(v) != s2.end()){
        s3.insert(v);
        }
    }
    for (int a: s3)
        cout << a << " ";
    return 0;
}