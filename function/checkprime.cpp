#include <iostream>
using namespace std;

void checkPrime(int n)
{
    if (n <= 1)
    {
        cout << "Not a Prime Number";
        return;
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a Prime Number";
            return;
        }
    }

    cout << "Prime Number";
}

int main()
{
    int n;
    cout<<"Enter a number to check : ";
    cin >> n;
    checkPrime(n);
    return 0;
}