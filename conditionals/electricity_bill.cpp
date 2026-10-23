
#include <iostream>
using namespace std;

int main() {
    int units;
    double bill;

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units < 0) {
        cout << "Invalid units" << endl;
    } else {
        if (units <= 100) {
            bill = units * 1.50;
        } else if (units <= 200) {
            bill = (100 * 1.50) + (units - 100) * 2.50;
        } else {
            bill = (100 * 1.50) +
                   (100 * 2.50) +
                   (units - 200) * 4.00;
        }

        cout << "Electricity bill = Rs. " << bill << endl;
    }

    return 0;
}
