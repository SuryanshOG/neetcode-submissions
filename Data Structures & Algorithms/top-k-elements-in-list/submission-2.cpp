#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    int n = nums.size();
    unordered_map<int, int> mp;
    for(int x : nums) mp[x]++;
    vector<vector<int>> freq(n + 1);
    for (auto &p : mp) freq[p.second].push_back(p.first);
    vector<int> ans;
    for (int i = freq.size() - 1; i >= 0; i--) {
        if (ans.size() == k) return ans;
        ans.insert(ans.end(), freq[i].begin(), freq[i].end());
    }
    return ans;
    }
};
