#include <iostream>
using namespace std;
void allmight(int n){
    if (n == 0) return;
        cout << "Go Beyond, Plus Ultra!" << endl;
    allmight(n - 1);
}
int main() {
    int x;
    cout<<"How  many times do you wanna print?"<<endl;
    cin>>x;
    cout<<"Here it is!"<<endl;
    allmight(x);
    return 0;
}