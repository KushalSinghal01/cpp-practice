#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    map<char, int> freq;

    for (char c : s) {
        freq[c]++;
    }

    cout << "Character frequencies:\n";
    for (auto p : freq) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
