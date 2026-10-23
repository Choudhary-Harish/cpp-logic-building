
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    int evenCount = 0;
    int oddCount = 0;

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size.\n";
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    cout << "Even elements = " << evenCount << '\n';
    cout << "Odd elements = " << oddCount << '\n';

    return 0;
}
