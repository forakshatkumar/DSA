#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int A[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> A[i];
    }
    int max = A[0], min = A[0], sum = 0, max_index, min_index;
    for (int i = 0; i < 10; i++)
    {
        sum += A[i];
        if (A[i] > max)
        {
            max = A[i];
            max_index = i;
        }
        else
        {
            min = A[i];
            min_index = i;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << &A[i] << endl; // f0r the address
    }

    cout << "max value : " << max << "index is : " << max_index << endl;
    cout << "min value : " << min << "inex is : " << min_index << endl;
    cout << "sum of array : " << sum << endl;
    cout << &max << endl;
    cout << &min << endl;
}