#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    map<int,int> freq;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    cout << "Frequency:\n";
    for(auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
