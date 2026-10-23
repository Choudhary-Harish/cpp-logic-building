
#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;

    cout << "How many numbers (1-100)? ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid number of elements.\n";
        return 1;
    }

    map<int, int> frequency;

    cout << "Enter " << n << " numbers: ";

    for (int i = 0; i < n; i++) {
        int value;
        cin >> value;
        frequency[value]++;
    }

    cout << "Element frequencies:\n";

    for (const auto& entry : frequency) {
        cout << entry.first << " occurs "
             << entry.second << " time(s)\n";
    }

    return 0;
}
