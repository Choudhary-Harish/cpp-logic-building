#include <iostream>
using namespace std;

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    if (exponent < 0) {
        cout << "Exponent must be non-negative.\n";
        return 0;
    }

    double result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    cout << "Result = " << result << '\n';
    return 0;
}
