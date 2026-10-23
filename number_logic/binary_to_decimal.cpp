#include <iostream>
#include <string>
#include <limits>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    if (binary.empty()) {
        cout << "Invalid input.\n";
        return 0;
    }

    unsigned long long decimal = 0;
    const auto maxValue = numeric_limits<unsigned long long>::max();

    for (char bit : binary) {
        if (bit != '0' && bit != '1') {
            cout << "Invalid binary number.\n";
            return 0;
        }

        int digit = bit - '0';

        if (decimal > (maxValue - digit) / 2) {
            cout << "Number is too large.\n";
            return 0;
        }

        decimal = decimal * 2 + digit;
    }

    cout << "Decimal = " << decimal << '\n';
    return 0;
}
