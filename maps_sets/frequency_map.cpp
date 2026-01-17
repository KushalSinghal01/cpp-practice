#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, x;
    cout << "Enter number of elements: ";
    cin >> n;

    map<int, int> freq;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        freq[x]++;
    }

    cout << "Frequencies:\n";
    for (auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
