class Solution {
public:
    int maxScore(string s) {
        int total_ones = 0;
        int n = s.size();
        for (char c : s) if (c == '1') total_ones++;
        int lzero = 0;
        int lone = 0;
        int ans = INT_MIN;
        for (int i = 0; i <= n - 2; i++) {
            if (s[i] == '0') lzero++;
            else lone++;
            int score = lzero + (total_ones - lone);
            ans = max(ans, score);
        }
        return ans;
    }
};