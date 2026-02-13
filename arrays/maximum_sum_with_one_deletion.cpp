#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n = arr.size();
        
        int dp0 = arr[0];        // no deletion
        int dp1 = 0;             // one deletion used
        int ans = arr[0];
        
        for(int i = 1; i < n; i++) {
            dp1 = max(dp0, dp1 + arr[i]);    // delete current OR already deleted
            dp0 = max(arr[i], dp0 + arr[i]); // normal kadane
            
            ans = max({ans, dp0, dp1});
        }
        
        return ans;
    }
};
