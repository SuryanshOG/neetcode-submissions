class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        for (int x : nums)
            freq[x]++;

        vector<vector<int>> buckets(nums.size() + 1);

        for (auto &[num, f] : freq)
            buckets[f].push_back(num);

        vector<int> ans;

        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (int num : buckets[i]) {
                ans.push_back(num);

                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};