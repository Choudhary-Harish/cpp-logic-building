
#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[100];
    long long sum = 0;

    cout << "Enter number of elements (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid array size.\n";
        return 1;
    }

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / n;

    cout << "Sum = " << sum << '\n';
    cout << "Average = " << average << '\n';

    return 0;
}
