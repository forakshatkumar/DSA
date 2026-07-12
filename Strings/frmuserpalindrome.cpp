#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cout << "Enter a string : ";
    getline(cin,str);
    string rev = str ;
        
    reverse(rev.begin(), rev.end());

        if ( str == rev ){
            cout << "String is Palindrome" <<endl;
        }
        else{
            cout << "String is not Palindrome" << endl;
        }
    return 0;
}