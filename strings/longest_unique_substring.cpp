#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    unordered_map<char, int> lastSeen;
    int left = 0, maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        if (lastSeen.find(s[right]) != lastSeen.end()) {
            left = max(left, lastSeen[s[right]] + 1);
        }

        lastSeen[s[right]] = right;
        maxLen = max(maxLen, right - left + 1);
    }

    cout << "Length of longest substring without repeating characters: "
         << maxLen << endl;

    return 0;
}
