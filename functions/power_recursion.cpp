
#include <iostream>
using namespace std;

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    }

    return base * power(base, exponent - 1);
}

int main() {
    double base;
    int exponent;

    cout << "Enter base and non-negative exponent: ";
    cin >> base >> exponent;

    if (exponent < 0) {
        cout << "Exponent must be non-negative.\n";
        return 1;
    }

    cout << "Result = " << power(base, exponent) << '\n';

    return 0;
}
