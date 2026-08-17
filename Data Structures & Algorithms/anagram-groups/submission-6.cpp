class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for (string s : strs) {
            vector<int> k(26,0);
            for (char c : s) {
                k[c - 'a']++;
            }
            string key = "";
            for (int x : k) {
                key += to_string(x) + "#";
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto &p : mp) ans.push_back(p.second);
        return ans;
    }
};
