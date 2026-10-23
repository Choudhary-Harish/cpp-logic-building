
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a <= b && a <= c) {
        cout << "Smallest = " << a << endl;
    } else if (b <= a && b <= c) {
        cout << "Smallest = " << b << endl;
    } else {
        cout << "Smallest = " << c << endl;
    }

    return 0;
}

