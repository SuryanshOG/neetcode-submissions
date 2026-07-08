class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<pair<int,int>> freq;
        for (int i : nums) {
            bool isPresent = false;
            for (auto &p : freq) {
                if (p.first == i) {
                    p.second++;
                    isPresent = true;
                    break;
                }
            }
            if (!isPresent){
                freq.push_back({i,1});
            } 
        }
        sort(freq.begin(),freq.end(),
        [](auto &a, auto &b){return a.second > b.second;});
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(freq[i].first);
        }
        return res;
    }
};
