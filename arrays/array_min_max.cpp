
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

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

    int minimum = arr[0];
    int maximum = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }

        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Minimum = " << minimum << '\n';
    cout << "Maximum = " << maximum << '\n';

    return 0;
}
