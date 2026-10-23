#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a non-negative number: ";
    cin >> n;

    if (n < 0) {
        cout << "Enter a non-negative number.\n";
        return 0;
    }

    while (n >= 10) {
        long long sum = 0;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        n = sum;
    }

    cout << "Digital root = " << n << '\n';
    return 0;
}
