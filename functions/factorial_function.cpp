
#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long result = 1;

    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
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
