
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter dividend: ";
    cin >> a;

    cout << "Enter divisor: ";
    cin >> b;

    if (b != 0) {
        cout << "Quotient = " << a / b << endl;
        cout << "Remainder = " << a % b << endl;
    } else {
        cout << "Divisor cannot be zero." << endl;
    }

    return 0;
}
