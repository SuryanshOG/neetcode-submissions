class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char,int> mp;
        for (char i : s) {
            mp[i]++;
        }
        for (int i : t) {
            mp[i]--;
        }
        for (auto &p : mp) {
            if (p.second != 0) {
                return false;
            }
        }
        return true;
    }
};
