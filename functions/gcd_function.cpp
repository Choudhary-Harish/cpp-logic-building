
#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main() {
    long long a, b;

    cout << "Enter two non-negative numbers: ";
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << "Please enter non-negative numbers.\n";
        return 1;
    }

    cout << "GCD = " << gcd(a, b) << '\n';

    return 0;
}
