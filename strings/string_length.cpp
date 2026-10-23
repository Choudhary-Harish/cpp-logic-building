
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int length = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    for (char ch : text) {
        (void)ch;
        length++;
    }

    cout << "String length = " << length << '\n';

    return 0;
}
