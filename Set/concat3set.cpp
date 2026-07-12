#include <bits/stdc++.h>
using namespace std;

int main() {
    set < int > s;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s.insert(x);
    }
    set<int>s2;
    int a,b;
    cin>>a;
    for (int i = 1; i <= n; i++) {
        cin >> b;
        s.insert(b);
    }
    
    set<int>s3;
    int c,d;
    cin>>c;
    for (int i = 1; i <= n; i++) {
        cin >> d;
        s.insert(d);
    }
    
    set<int>s4;
    s4.insert(s.begin(), s.end());
    s4.insert(s2.begin() ,s2.end());
    s4.insert(s3.begin(),s3.end());
    
    for (int v: s4)
        cout << v << " ";
    cout << endl;
}