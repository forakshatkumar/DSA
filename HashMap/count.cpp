#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int A[11] = {
        10,
        2,
        3,
        4,
        2,
        5,
        6,
        4,
        2,
        3,
        6
    };
    map < int, int > m; //decresing order print
    for (int i: A) {
        m[i] += 1;
    }
    int countn = 0;
    int countm = 0;
    for (auto e: m) {
        if (e.second != 1) {
            countn++;
        }
        else {
            countm++;
        }
    }
    cout << countn * countm << endl;
    return 0;
}

//given an array with n integers print the product of count of unique and non unique elemnets, 
// size = 11, a = 10,2,3,4,2,5,6,4,2,3,6 , ans = 8