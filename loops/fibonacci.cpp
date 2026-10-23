#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms (1-93): ";
    cin >> n;

    if (n < 1 || n > 93) {
        cout << "Enter a number between 1 and 93.\n";
        return 0;
    }

    long long first = 0;
    long long second = 1;

    for (int i = 1; i <= n; i++) {
        cout << first << " ";

        long long next = first + second;
        first = second;
        second = next;
    }

    cout << '\n';
    return 0;
}
