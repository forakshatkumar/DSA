#include <bits/stdc++.h>
using namespace std;

int n = 5;
int Front = 0, Rear = -1;
int Queue[5];

void enqueue(int a)
{
    if (Rear == n - 1)
    {
        cout << "Queue is Full" << endl;
    }
    else
    {
        Rear++;
        Queue[Rear] = a;
    }
}
void dequeue()
{
    if (Front > Rear)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        cout << "Removing element : " << Queue[Front] << endl;
        Front++;
    }
}

int main()
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        enqueue(x);
    }
    dequeue();
    for (int i = Front; i < n; i++)
    {
        cout << Queue[i] << " ";
    }

    return 0;
}