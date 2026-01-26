#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    cout << "Sorted elements:\n";
    for(int x : v) cout << x << " ";

    return 0;
}
