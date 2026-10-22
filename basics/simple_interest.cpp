
#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, interest;

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual rate (%): ";
    cin >> rate;

    cout << "Enter time in years: ";
    cin >> time;

    interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << interest << endl;
    cout << "Total Amount = " << principal + interest << endl;

    return 0;
}

