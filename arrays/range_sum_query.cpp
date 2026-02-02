#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Build prefix sum array
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    int l, r;
    cout << "Enter range (l r): ";
    cin >> l >> r;

    int sum;
    if (l == 0)
        sum = prefix[r];
    else
        sum = prefix[r] - prefix[l - 1];

    cout << "Sum from index " << l << " to " << r << " = " << sum << endl;
    return 0;
}
