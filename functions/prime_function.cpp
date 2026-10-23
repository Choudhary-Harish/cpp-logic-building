
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }

    for (int i = 2; i <= n / i; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << "Prime number\n";
    } else {
        cout << "Not a prime number\n";
    }

    return 0;
}
