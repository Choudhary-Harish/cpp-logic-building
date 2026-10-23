
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];

    cout << "Enter number of elements (2-100): ";
    cin >> n;

    if (n < 2 || n > 100) {
        cout << "Invalid array size.\n";
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = arr[0];
    bool hasSecond = false;

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
            hasSecond = true;
        } else if (arr[i] < largest &&
                   (!hasSecond || arr[i] > secondLargest)) {
            secondLargest = arr[i];
            hasSecond = true;
        }
    }

    if (hasSecond) {
        cout << "Second-largest distinct element = "
             << secondLargest << '\n';
    } else {
        cout << "No second-largest distinct element.\n";
    }

    return 0;
}
