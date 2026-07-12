#include <iostream>
using namespace std;
void swap(int x,int y){
    int t = x;
    x = y;
    y = t;
    cout<<"After Swapping x = "<<x<<" & y ="<<y<<endl;
}
int main(){
    int x= 1, y = 2;
    cout<<"Before swapping x = "<<x<<" & y = "<<y<<endl;
    swap(x,y);
    return 0;
}