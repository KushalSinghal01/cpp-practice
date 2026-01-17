#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    set<int> s;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.insert(x);
    }

    cout << "Unique elements:\n";
    for (int val : s) {
        cout << val << " ";
    }

    return 0;
}
