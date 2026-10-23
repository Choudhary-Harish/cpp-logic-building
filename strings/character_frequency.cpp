
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int frequency[256] = {};

    cout << "Enter a string: ";
    getline(cin, text);

    for (unsigned char ch : text) {
        frequency[ch]++;
    }

    cout << "Character frequencies:\n";

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            if (i == ' ') {
                cout << "' '";
            } else if (i == '\t') {
                cout << "'\\t'";
            } else {
                cout << "'" << static_cast<char>(i) << "'";
            }

            cout << " = " << frequency[i] << '\n';
        }
    }

    return 0;
}
