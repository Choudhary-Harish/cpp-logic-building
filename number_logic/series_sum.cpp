#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    if (n < 1) {
        cout << "Enter a positive number of terms.\n";
        return 0;
    }

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }

    cout << fixed << setprecision(6);
    cout << "Series sum = " << sum << '\n';

    return 0;
}
