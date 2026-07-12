#include <iostream>
using namespace std;
int sumN(int x){
    int sum = 0;
    for(int i = 0; i <= x; i++){
        sum += i;
    }
    
    return sum;
}
int main(){
    int n;
    cout<<"Enter the value of N"<<endl;
        cin>>n;
    cout<<"Sum of N : "<<sumN(n)<<endl;
    return 0;
}