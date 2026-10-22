
#include <iostream>
using namespace std;

int main() {
    double radius;
    const double PI = 3.141592653589793;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area = " << PI * radius * radius << endl;
    cout << "Circumference = " << 2 * PI * radius << endl;

    return 0;
}
