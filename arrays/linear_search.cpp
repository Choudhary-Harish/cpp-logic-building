
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int target;
    int position = -1;

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size.\n";
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter value to search: ";
    cin >> target;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            position = i;
            break;
        }
    }

    if (position != -1) {
        cout << "Found at index " << position
             << " (position " << position + 1 << ")\n";
    } else {
        cout << "Element not found.\n";
    }

    return 0;
}
