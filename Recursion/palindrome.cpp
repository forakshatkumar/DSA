#include <iostream>
using namespace std;
int rev = 0;
int palindrome(int n){
    if(n == 0){
        return rev;
    }
    rev = rev*10 + (n%10);
    return palindrome(n/10);
}
int main()
{
    int a;
    cin>>a;
    int result = palindrome(a);
    if(a == result){
        cout<<"Yes";
    }
    else{
        cout<<"No";
   }
   return 0;
}