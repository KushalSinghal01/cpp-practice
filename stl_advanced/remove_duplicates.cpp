#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    set<int> s(v.begin(), v.end());

    cout << "Unique elements:\n";
    for(auto val : s) {
        cout << val << " ";
    }

    return 0;
}
