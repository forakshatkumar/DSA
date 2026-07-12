#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1;
    cout << "Enter a string : ";
    getline(cin, s1);
    string rev = s1;
    reverse(rev.begin(), rev.end());

    if (s1 == rev && s1.length() % 2 == 0)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}