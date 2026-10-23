
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    cout << "Two integers: " << add(10, 20) << '\n';
    cout << "Three integers: " << add(10, 20, 30) << '\n';
    cout << "Two decimals: " << add(2.5, 3.7) << '\n';

    return 0;
}
