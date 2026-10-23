
#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter three sides: ";
    cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        cout << "Invalid triangle" << endl;
    } else if (a == b && b == c) {
        cout << "Equilateral triangle" << endl;
    } else if (a == b || a == c || b == c) {
        cout << "Isosceles triangle" << endl;
    } else {
        cout << "Scalene triangle" << endl;
    }

    return 0;
}
