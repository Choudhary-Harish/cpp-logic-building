#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number (0-20): ";
    cin >> n;

    if (n < 0 || n > 20) {
        cout << "Enter a number between 0 and 20.\n";
        return 0;
    }

    unsigned long long factorial = 1;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << "Factorial = " << factorial << '\n';
    return 0;
}
