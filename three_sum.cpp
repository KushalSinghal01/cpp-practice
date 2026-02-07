#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    bool found = false;

    for (int i = 0; i < n - 2; i++) {

        // Skip duplicates for first element
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == 0) {
                cout << "[" << arr[i] << ", "
                     << arr[left] << ", "
                     << arr[right] << "]\n";
                found = true;

                // Skip duplicates
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;

                left++;
                right--;
            }
            else if (sum < 0) {
                left++;   // need bigger sum
            }
            else {
                right--;  // need smaller sum
            }
        }
    }

    if (!found)
        cout << "No triplets found with sum 0\n";

    return 0;
}
