#include <iostream>
using namespace std;

void isPrime(int n, int i) {
    if (n <= 1) {
        cout << "Not a prime number";
        return;
    }

    if (i * i > n) {
        cout << "Prime number";
        return;
    }

    if (n % i == 0) {
        cout << "Not a prime number";
        return;
    }

    isPrime(n, i + 1);
}

int main() {
    int n;
    cin >> n;

    isPrime(n, 2);

    return 0;
}
