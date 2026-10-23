
#include <iostream>
using namespace std;

long long add(long long a, long long b) {
    return a + b;
}

int main() {
    long long a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << add(a, b) << '\n';

    return 0;
}
