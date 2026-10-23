#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter half-height of diamond: ";
    cin >> n;

    if (n < 1 || n > 50) {
        cout << "Enter a value between 1 and 50.\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << '\n';
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int s = 1; s <= n - i; s++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }

        cout << '\n';
    }

    return 0;
}
