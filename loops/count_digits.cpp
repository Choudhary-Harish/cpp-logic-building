#include <iostream>
using namespace std;

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;

    do {
        count++;
        n /= 10;
    } while (n != 0);

    cout << "Number of digits = " << count << '\n';
    return 0;
}
