class Solution {
public:
    int maxDifference(string s) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;
        int ans = INT_MIN;
        for (int i = 0; i < 25; i++) {
            if (freq[i] > 0 && freq[i] % 2 == 1) {
                for (int j = 0; j < 25; j++) {
                    if (freq[j] > 0 && freq[j] % 2 == 0) {
                        ans = max(ans, freq[i] - freq[j]);
                    }
                }
            }
        }
        return ans;
    }
};