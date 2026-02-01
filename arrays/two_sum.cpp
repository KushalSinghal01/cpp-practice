#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target sum: ";
    cin >> target;

    unordered_map<int, int> mp;
    bool found = false;

    for (int i = 0; i < n; i++) {
        int needed = target - arr[i];

        if (mp.find(needed) != mp.end()) {
            cout << "Indices: " << mp[needed] << " and " << i << endl;
            found = true;
            break;
        }
        mp[arr[i]] = i;
    }

    if (!found)
        cout << "No two sum solution found";

    return 0;
}
