#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        int ans = 0;
        for (int x : nums) st.insert(x);
        for (int x : nums) {
            int streak = 0;
            if (!st.count(x - 1)) {
                int start = x;
                while(st.count(start)) {
                    start++;
                    streak++;
                }
            }
            ans = max(ans, streak);
        }
        return ans;
    }
};
