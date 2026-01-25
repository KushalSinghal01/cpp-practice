#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    sort(v.begin(), v.end());  // binary search needs sorted array

    if (binary_search(v.begin(), v.end(), key))
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
