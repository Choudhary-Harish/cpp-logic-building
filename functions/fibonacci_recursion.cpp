
#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    cout << "Enter position (0-40): ";
    cin >> n;

    if (n < 0 || n > 40) {
        cout << "Enter a position between 0 and 40.\n";
        return 1;
    }

    cout << "Fibonacci number = " << fibonacci(n) << '\n';

    return 0;
}
