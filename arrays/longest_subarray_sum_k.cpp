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

    unordered_map<int, int> mp;
    int sum = 0, maxLen = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum == k)
            maxLen = i + 1;

        if (mp.find(sum - k) != mp.end())
            maxLen = max(maxLen, i - mp[sum - k]);

        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    cout << "Longest subarray length: " << maxLen << endl;
    return 0;
}
