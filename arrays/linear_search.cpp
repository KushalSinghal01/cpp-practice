#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;
            break;
        }
    }

    if (index == -1) cout << "Not found";
    else cout << "Found at index: " << index;

    return 0;
}
