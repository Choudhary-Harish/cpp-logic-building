
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    string cleaned;

    cout << "Enter a string: ";
    getline(cin, text);

    for (unsigned char ch : text) {
        if (isalnum(ch)) {
            cleaned += static_cast<char>(tolower(ch));
        }
    }

    bool palindrome = true;
    int left = 0;
    int right = static_cast<int>(cleaned.size()) - 1;

    while (left < right) {
        if (cleaned[left] != cleaned[right]) {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if (palindrome) {
        cout << "Palindrome\n";
    } else {
        cout << "Not a palindrome\n";
    }

    return 0;
}
