#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    if (n <= 0) {
        cout << "Enter a positive number.\n";
        return 0;
    }

    cout << "Factors: ";

    for (int i = 1; i <= n / i; i++) {
        if (n % i == 0) {
            cout << i << " ";

            if (i != n / i) {
                cout << n / i << " ";
            }
        }
    }

    cout << '\n';
    return 0;
}
