#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum k: ";
    cin >> k;

    unordered_map<int, int> freq;
    int prefixSum = 0;
    int count = 0;

    // Important: prefixSum 0 appears once before starting
    freq[0] = 1;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        // If prefixSum - k exists, add its frequency
        if (freq.find(prefixSum - k) != freq.end()) {
            count += freq[prefixSum - k];
        }

        // Store/update frequency of current prefix sum
        freq[prefixSum]++;
    }

    cout << "Number of subarrays with sum " << k << " = " << count << endl;
    return 0;
}
