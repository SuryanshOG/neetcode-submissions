class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (string s : strs) {
            string t = s;
            sort(t.begin(), t.end());
            string sorted = t;
            mp[sorted].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto &p : mp) {
            ans.push_back(p.second);
        }
        return ans;
    }
};
