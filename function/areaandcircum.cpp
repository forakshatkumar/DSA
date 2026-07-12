#include <iostream>
using namespace std;
float area(int r){
    int a = 3.14*r*r;
    return a;
}
int circumference(int r){
    int b = 2*3.14*r;
    return b;
}
int main(){
    int x;
    cout<<"Enter the radius : ";
    cin>>x;
    cout<<"The are of circle is : "<<area(x)<<endl;
    cout<<"Circumference of circle is : "<<circumference(x);
    return 0;
}
