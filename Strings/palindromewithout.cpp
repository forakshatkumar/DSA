#include <iostream>
using namespace std;

int main() {
    string str;
    int i, j, plus = 1;

    cout << "Enter string: ";
    cin >> str;

    j = str.size() - 1;

    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            plus = 0;
            break;
        }
    }

    if (plus)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
