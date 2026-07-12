#include <iostream>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    return a * power(a, b - 1);
}

int main()
{
    int x, y;
    cout << "Enter a : ";
        cin >> x;
    cout << "Enter b : ";
        cin >> y;
    int result = power(x,y);
    cout << result;
    return 0;
}
