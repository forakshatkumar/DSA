#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string str = "Plus Ultra";
    string rev = str ;
        
    reverse(rev.begin(), rev.end());

        if ( str == rev ){
            cout << "Palindrome" <<endl;
        }
        else{
            cout << "Not Palindrome" << endl;
        }
    return 0;
}