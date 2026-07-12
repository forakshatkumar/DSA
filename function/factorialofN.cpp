#include <iostream>
using namespace std;
int fact(int x){
    int mul = 1;
    for(int i = 1; i <= x; i++){
        mul *= i;
    }
    
    return mul;
}
int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
    cin>>n;
    cout<<"Factorial of N : "<<fact(n)<<endl;
    return 0;
}