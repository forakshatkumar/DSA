#include <bits/stdc++.h>
using namespace std;

int main() {

    set < int > s1, s2, s3,s4;

    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        s1.insert(x);
    }
    int m, y;
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> y;
        s2.insert(y);
    }
    
    
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(s3,s3.begin()));
    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(),inserter(s4,s4.begin()));

    for (int v: s3) {
        cout << v << " ";
    }
    cout<<endl;
    for (int v: s4) {
        cout << v << " ";
    }
    
    int P = s3.size();
    int Q = s4.size();
    
    cout<<endl;
    cout<<P*Q<<endl;

    cout << endl;

    return 0;
}