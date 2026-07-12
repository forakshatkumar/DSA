#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n], lb, ub, item, loc;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    lb = 0;
    ub = n-1;
    item = 2;
    loc = -1;
    int mid = (lb + ub) / 2;
    while ((lb <= ub) && (loc == -1))
    {
        if (A[mid] == item)
        {
            loc = mid;
        }
        else if (A[mid] > item)
        {
            ub = mid - 1;
        }
        else
        {
            lb = mid + 1;
        }
        mid = (lb + ub) / 2;
    }

    if (loc == -1)
    {
        cout << "Not Found";
    }
    else
    {
        cout << "Found at loc : " << loc + 1 << endl;
    }
    return 0;
} 