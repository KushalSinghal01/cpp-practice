#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(256, -1);  // Stores last index of each character
    int maxLen = 0, start = 0;

    for (int i = 0; i < s.length(); i++) {
        if (lastIndex[s[i]] >= start) {
            start = lastIndex[s[i]] + 1;  // Move start if duplicate found
        }
        lastIndex[s[i]] = i;
        maxLen = max(maxLen, i - start + 1);
    }

    return maxLen;
}

int main() {
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s);
    return 0;
}
