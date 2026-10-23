#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Not a palindrome.\n";
        return 0;
    }

    long long original = n;
    long long reverse = 0;

    while (n > 0) {
        int digit = static_cast<int>(n % 10);
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    if (original == reverse) {
        cout << "Palindrome number.\n";
    } else {
        cout << "Not a palindrome.\n";
    }

    return 0;
}
