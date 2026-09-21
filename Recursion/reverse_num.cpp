#include <bits/stdc++.h>
using namespace std;

int reverse(int a,int rev = 0){
    if(a == 0) return rev;
    else return reverse(a/10,rev*10 + a%10);
}
int main(){
    int x;
    cin >> x;
    cout << reverse(x) << endl;
    return 0;
}