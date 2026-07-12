#include <iostream>
using namespace std;
void fib(int n) //function declaration
{
    //function definition
    int a = 0, b = 1, c; 
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;
    fib(a); // function calling
    return 0;
}