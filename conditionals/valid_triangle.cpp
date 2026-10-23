
#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        cout << "Valid triangle" << endl;
    } else {
        cout << "Invalid triangle" << endl;
    }

    return 0;
}
