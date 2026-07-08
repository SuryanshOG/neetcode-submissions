class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //using bucket sort
        unordered_map<int,int> mp;
        for (int i : nums) {
            mp[i]++;
        }
        vector<vector<int>> freq_bucket(nums.size() + 1);
        for (auto &p : mp) {
            int current = p.first;
            int freq = p.second;
            freq_bucket[freq].push_back(current);
        }
        vector<int> result;
        int counter;
        for (int i = freq_bucket.size() - 1; i >= 0; i--) {
            if (result.size() == k) return result;
            result.insert(result.end(), freq_bucket[i].begin(), freq_bucket[i].end());
        }
        return result;
    }
};
