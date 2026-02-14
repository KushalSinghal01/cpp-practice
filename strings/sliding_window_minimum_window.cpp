#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        if (t.size() > s.size()) return "";

        vector<int> freq(128, 0);
        for (char c : t) freq[c]++;

        int left = 0, right = 0;
        int required = t.size();
        int minLen = INT_MAX;
        int start = 0;

        while (right < s.size()) {
            // If character needed
            if (freq[s[right]] > 0)
                required--;

            freq[s[right]]--;
            right++;

            // When all characters matched
            while (required == 0) {
                if (right - left < minLen) {
                    minLen = right - left;
                    start = left;
                }

                freq[s[left]]++;
                if (freq[s[left]] > 0)
                    required++;

                left++;
            }
        }

        return (minLen == INT_MAX) ? "" : s.substr(start, minLen);
    }
};
