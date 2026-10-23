
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string result;

    cout << "Enter a string: ";
    getline(cin, text);

    for (char ch : text) {
        if (ch != ' ') {
            result += ch;
        }
    }

    cout << "String without spaces = " << result << '\n';

    return 0;
}
