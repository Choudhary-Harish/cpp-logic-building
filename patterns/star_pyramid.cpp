#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Enter rows between 1 and 100.\n";
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

    return 0;
}
