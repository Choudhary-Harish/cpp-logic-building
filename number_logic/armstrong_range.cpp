#include <iostream>
using namespace std;

long long power(int base, int exponent) {
    long long result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

bool isArmstrong(long long n) {
    if (n < 0) {
        return false;
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

    return sum == n;
}

int main() {
    long long start, end;

    cout << "Enter start and end: ";
    cin >> start >> end;

    if (start < 0 || end < start || end > 1000000) {
        cout << "Use a valid range from 0 to 1000000.\n";
        return 0;
    }

    for (long long i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            cout << i << " ";
        }
    }

    cout << '\n';
    return 0;
}
