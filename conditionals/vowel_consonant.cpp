
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    if (ch < 'a' || ch > 'z') {
        cout << "Not an alphabet" << endl;
    } else if (ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u') {
        cout << "Vowel" << endl;
    } else {
        cout << "Consonant" << endl;
    }

    return 0;
}
