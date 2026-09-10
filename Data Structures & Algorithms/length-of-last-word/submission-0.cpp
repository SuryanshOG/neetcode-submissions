class Solution {
public:
    int lengthOfLastWord(string s) {

        int ans = 0;
        int n = s.size();
        while (s.back() == ' ') s.pop_back();
        n = s.size();
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') ans++;
            else break;
        }
        return ans;
    }
};