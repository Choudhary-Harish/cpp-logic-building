
#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return static_cast<unsigned long long>(n) * factorial(n - 1);
}

int main() {
    int n;

    cout << "Enter a number (0-20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number between 0 and 20.\n";
        return 1;
    }

    cout << "Factorial = " << factorial(n) << '\n';

    return 0;
}
