#include <iostream>
using namespace std;
void midoriya(int x){
    int rem,rev=0,original;

    original = x;

    while(x>0){
        rem = x % 10;
        rev = rev*10 + rem;
        x = x / 10;
    }
    if(original ==  rev){
        cout<<"Pallindrome"<<endl;
    }
    else{
        cout<<"Not Pallindrome";
    }
}
int main(){
    int n;
    cout<<"Enter a number to check"<<endl;
        cin>>n;
    //function execution
    midoriya(n);
    return 0;
}