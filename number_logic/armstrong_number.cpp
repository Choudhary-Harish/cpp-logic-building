#include <iostream>
using namespace std;

long long power(int base, int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
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
    int digits = 0;

    do {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = n;
    long long sum = 0;

    do {
        int digit = static_cast<int>(temp % 10);
        sum += power(digit, digits);
        temp /= 10;
    } while (temp > 0);

    if (sum == n) {
        cout << "Armstrong number.\n";
    } else {
        cout << "Not an Armstrong number.\n";
    }

    return 0;
}
