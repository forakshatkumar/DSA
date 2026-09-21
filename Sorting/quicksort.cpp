#include <iostream>
using namespace std;
int A[100];

int partition(int A[], int low, int high)
{
    int pivot = A[high];
    int i = low;

    for (int j = low; j < high; j++)
    {
        if (A[j] < pivot)
        {
            swap(A[i], A[j]);
            i++;
        }
    }

    swap(A[i], A[high]);
    return i;
}

void quickSort(int A[], int low, int high)
{
    if (low < high)
    {
        int p = partition(A, low, high);

        quickSort(A, low, p - 1);
        quickSort(A, p + 1, high);
    }
}

int main()
{
    int size;
    cout << "Enter Array Size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> A[i];
    }
    quickSort(A, 0, size - 1);
    cout << "Sorting..." << "\n";
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
}