
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

    bool found = false;

    for (unsigned char ch : text) {
        if (frequency[ch] == 1) {
            cout << "First non-repeating character = "
                 << static_cast<char>(ch) << '\n';
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "No non-repeating character found.\n";
    }

    return 0;
}
