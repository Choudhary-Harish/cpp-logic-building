
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

    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int uniqueCount = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[uniqueCount - 1]) {
            arr[uniqueCount] = arr[i];
            uniqueCount++;
        }
    }

    cout << "Array without duplicates: ";
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << ' ';
    }

    cout << '\n';
    return 0;
}
