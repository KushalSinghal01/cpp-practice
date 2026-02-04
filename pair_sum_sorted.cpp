#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    int left = 0, right = n - 1;
    bool found = false;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "Pair found at indices: " << left << " and " << right << endl;
            found = true;
            break;
        }
        else if (sum < target)
            left++;      // need bigger sum
        else
            right--;     // need smaller sum
    }

    if (!found)
        cout << "No pair found with given sum";

    return 0;
}
