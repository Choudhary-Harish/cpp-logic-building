
#include <iostream>
using namespace std;

void changeByValue(int x) {
    x = 100;
    cout << "Inside pass by value = " << x << '\n';
}
void changeByReference(int &x) {
    x = 100;
}

int main() {
    int number = 10;

    cout << "Original value = " << number << '\n';

    changeByValue(number);
    cout << "After pass by value = " << number << '\n';

    changeByReference(number);
    cout << "After pass by reference = " << number << '\n';

    return 0;
}
