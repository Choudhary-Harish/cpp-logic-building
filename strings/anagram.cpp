
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;
    int frequency[256] = {};

    cout << "Enter first string: ";
    getline(cin, first);

    cout << "Enter second string: ";
    getline(cin, second);

    for (unsigned char ch : first) {
        if (!isspace(ch)) {
            frequency[tolower(ch)]++;
        }
    }

    for (unsigned char ch : second) {
        if (!isspace(ch)) {
            frequency[tolower(ch)]--;
        }
    }

    bool anagram = true;

    for (int count : frequency) {
        if (count != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram) {
        cout << "The strings are anagrams.\n";
    } else {
        cout << "The strings are not anagrams.\n";
    }

    return 0;
}
