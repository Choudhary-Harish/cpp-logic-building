#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cout << "Enter a non-negative decimal number: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative number.\n";
        return 0;
    }

    if (n == 0) {
        cout << "Binary = 0\n";
        return 0;
    }

    string binary;

    while (n > 0) {
        binary = char('0' + n % 2) + binary;
        n /= 2;
    }

    cout << "Binary = " << binary << '\n';
    return 0;
}
