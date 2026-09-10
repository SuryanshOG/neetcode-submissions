class Solution {
public:
    int scoreOfString(string s) {
        int ans = 0;
        int n = s.size();
        for (int i = 1; i < n; i++) {
            int last = s[i - 1];
            int curr = s[i];
            ans += abs(curr - last);
        }
        return ans;
    }
};