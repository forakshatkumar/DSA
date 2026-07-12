#include <bits/stdc++.h>
using namespace std;

int main() {
    set < int > s1;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        s1.insert(x);
    }
    int s = accumulate(s1.begin(),s1.end(),1); //add
    
    int max = *max_element(s1.begin(),s1.end()); //check maximum value
    
    int min = *min_element(s1.begin(),s1.end());
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<s;
}