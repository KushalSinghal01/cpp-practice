#include <iostream>
#include <unordered_set>
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

    unordered_set<int> s;

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < n; i++) {
        if (s.find(arr[i]) == s.end()) {
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }

    return 0;
}
