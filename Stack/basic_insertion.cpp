#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int n;
    cin >> n;
    stack < string > cars;
    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        cars.push(x); //insertion
    }
    while(!cars.empty()){
        cout << cars.top() <<endl;
        cars.pop(); // printing elements
    }
    return 0;
}