#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    print(n - 1);
}
int main()
{
    int a = 100;
    print(a);
    return 0;
}