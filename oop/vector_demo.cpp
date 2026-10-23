
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "How many numbers (1-100)? ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of elements.\n";
        return 1;
    }

    vector<int> numbers;
    numbers.reserve(n);

    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Stored numbers: ";

    for (int value : numbers) {
        cout << value << ' ';
    }

    cout << "\nTotal elements: " << numbers.size() << '\n';

    return 0;
}
