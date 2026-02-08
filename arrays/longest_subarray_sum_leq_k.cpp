#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements (positive numbers only):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter maximum allowed sum K: ";
    cin >> k;

    int left = 0;
    int sum = 0;
    int maxLen = 0;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        // Shrink window if sum exceeds K
        while (sum > k) {
            sum -= arr[left];
            left++;
        }

        // Update maximum length
        maxLen = max(maxLen, right - left + 1);
    }

    cout << "Longest subarray length with sum <= " << k << " is: " 
         << maxLen << endl;

    return 0;
}
