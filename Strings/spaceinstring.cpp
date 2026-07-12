#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Plus Ultra";
    
    for(int i = 0; i < str.length(); i++){
        cout << str[i] << " ";
    }
    cout << endl;
    return 0;
}