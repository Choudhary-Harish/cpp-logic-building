#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    long long n;
    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative number.\n";
        return 0;
    }

    long long temp = n;
    long long sum = 0;

    do {
        int digit = static_cast<int>(temp % 10);
        sum += factorial(digit);
        temp /= 10;
    } while (temp > 0);

    if (sum == n) {
        cout << "Strong number.\n";
    } else {
        cout << "Not a strong number.\n";
    }

    return 0;
}
