
#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    int left = 0;
    int right = static_cast<int>(text.size()) - 1;

    while (left < right) {
        char temp = text[left];
        text[left] = text[right];
        text[right] = temp;

        left++;
        right--;
    }

    cout << "Reversed string = " << text << '\n';

    return 0;
}
