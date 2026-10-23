#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Enter size between 1 and 100.\n";
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << '\n';
    }

    return 0;
}
