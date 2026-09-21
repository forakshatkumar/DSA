#include <iostream>
using namespace std;

int a[100], b[100];

void merging(int low, int mid, int high)
{
    int l1 = low;
    int l2 = mid + 1;
    int i = low;

    while (l1 <= mid && l2 <= high)
    {
        if (a[l1] <= a[l2])
        {
            b[i++] = a[l1++];
        }
        else
        {
            b[i++] = a[l2++];
        }
    }

    while (l1 <= mid)
    {
        b[i++] = a[l1++];
    }

    while (l2 <= high)
    {
        b[i++] = a[l2++];
    }

    for (int j = low; j <= high; j++)
    {
        a[j] = b[j];
    }
}

void mergeSort(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(low, mid);
        mergeSort(mid + 1, high);
        merging(low, mid, high);
    }
}

int main()
{
    int size;
    cout << "Enter ARRAY Size: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    mergeSort(0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}
