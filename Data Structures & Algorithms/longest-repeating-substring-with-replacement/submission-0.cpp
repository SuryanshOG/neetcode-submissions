#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int res = 0;
        int maxfreq = 0;
        unordered_map<char, int> window;
        for (int r = 0; r < s.size(); r++) {
            window[s[r]]++;
            maxfreq = max(maxfreq, window[s[r]]);
            while((r - l + 1) - maxfreq > k) {
                window[s[l]]--;
                l++;
            }
            res = max(res, r - l + 1);
        }
        return  res;
    }
};
