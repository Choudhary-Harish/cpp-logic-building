#include <iostream>
using namespace std;

int main() {
    long long a, b;

    cout << "Enter two non-negative numbers: ";
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << "Enter non-negative numbers.\n";
        return 0;
    }

    long long x = a;
    long long y = b;

    while (y != 0) {
        long long remainder = x % y;
        x = y;
        y = remainder;
    }

    cout << "GCD = " << x << '\n';
    return 0;
}
