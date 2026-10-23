
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    for (unsigned char ch : text) {
        char lower = static_cast<char>(tolower(ch));

        if (lower >= 'a' && lower <= 'z') {
            if (lower == 'a' || lower == 'e' ||
                lower == 'i' || lower == 'o' ||
                lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
    }

    cout << "Vowels = " << vowels << '\n';
    cout << "Consonants = " << consonants << '\n';
    cout << "Digits = " << digits << '\n';
    cout << "Spaces = " << spaces << '\n';

    return 0;
}
