
#include <iostream>
using namespace std;

int main() {
    int n, m;
    int a[100], b[100], merged[200];

    cout << "Enter size of first sorted array (1-100): ";
    cin >> n;

    if (n < 1 || n > 100) {
        cout << "Invalid size for first array.\n";
        return 1;
    }

    cout << "Enter first sorted array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter size of second sorted array (1-100): ";
    cin >> m;

    if (m < 1 || m > 100) {
        cout << "Invalid size for second array.\n";
        return 1;
    }

    cout << "Enter second sorted array: ";
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    while (i < n) {
        merged[k++] = a[i++];
    }

    while (j < m) {
        merged[k++] = b[j++];
    }

    cout << "Merged sorted array: ";
    for (int p = 0; p < k; p++) {
        cout << merged[p] << ' ';
    }

    cout << '\n';
    return 0;
}
