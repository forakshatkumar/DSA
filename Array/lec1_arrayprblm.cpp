#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int A[10];
    for (int i = 0; i < 10; i++) {
        cin >> A[i];
    }
    int max = A[0],min = A[0], sum = 0;
    for (int i = 0; i < 10; i++){
        sum += A[i];
        if(A[i] > max){
            max = A[i];
        }
        else{
            min = A[i];
        }
    }
    for (int i = 0; i < 10; i++){
        cout << &A[i] << endl; // f0r the address
    }
    
    cout <<"max value : "<< max << endl;
    cout << "min value : "<<min << endl;
    cout << "sum of array : "<<sum << endl;
    cout << &max << endl;
    cout << &min << endl;
}