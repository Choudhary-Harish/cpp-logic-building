#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    long long original = n;
    long long reverse = 0;

    while (n != 0) {
        int digit = static_cast<int>(n % 10);
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    cout << "Original number = " << original << '\n';
    cout << "Reversed number = " << reverse << '\n';

    return 0;
}
