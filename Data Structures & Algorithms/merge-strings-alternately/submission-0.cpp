class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int f = 0;
        int s = 0;
        string ans = "";
        while (f < word1.size() && s < word2.size()) {
            ans.push_back(word1[f++]);
            ans.push_back(word2[s++]);
        }
        while (f < word1.size()) ans.push_back(word1[f++]);
        while (s < word2.size()) ans.push_back(word2[s++]);
        return ans;
    }
};