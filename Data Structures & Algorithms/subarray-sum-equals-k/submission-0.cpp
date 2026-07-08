class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ps = 0;
        int ans = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (int i : nums) {
            ps += i;
            if (mp.count(ps - k)) {
                ans += mp[ps - k];
            }
            mp[ps]++;
        }
        return ans;
    }
};