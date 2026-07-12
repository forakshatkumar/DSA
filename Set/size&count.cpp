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
    s.insert(s2.begin() ,s2.end());
    
    for (int v: s)
        cout << v << " ";
    cout << endl;
    cout << s.size() << endl; // for the size of the set
    
    cout<<s.count(10)<<endl; // for counting the frequency
}