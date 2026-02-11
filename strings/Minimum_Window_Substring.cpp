#include <bits/stdc++.h>
using namespace std;

string minWindow(string s, string t) {
    if (t.size() > s.size()) return "";

    unordered_map<char, int> freqT, window;
    for (char c : t) freqT[c]++;

    int have = 0, need = freqT.size();
    int left = 0, minLen = INT_MAX, startIdx = -1;

    for (int right = 0; right < s.size(); right++) {
        char c = s[right];
        window[c]++;

        if (freqT.count(c) && window[c] == freqT[c])
            have++;

        while (have == need) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                startIdx = left;
            }

            window[s[left]]--;
            if (freqT.count(s[left]) && window[s[left]] < freqT[s[left]])
                have--;
            left++;
        }
    }

    return startIdx == -1 ? "" : s.substr(startIdx, minLen);
}
