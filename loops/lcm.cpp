#include <iostream>
#include <numeric>
using namespace std;

int main() {
    long long a, b;

    cout << "Enter two non-negative numbers: ";
    cin >> a >> b;

    if (a < 0 || b < 0) {
        cout << "Enter non-negative numbers.\n";
        return 0;
    }

    if (a == 0 || b == 0) {
        cout << "LCM = 0\n";
        return 0;
    }

    long long gcdValue = gcd(a, b);
    long long lcmValue = (a / gcdValue) * b;

    cout << "LCM = " << lcmValue << '\n';
    return 0;
}
