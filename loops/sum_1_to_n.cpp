#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    if (n < 1) {
        cout << "Enter a positive number.\n";
        return 0;
    }

    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum = " << sum << '\n';
    return 0;
}
