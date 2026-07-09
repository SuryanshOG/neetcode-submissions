#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string minWindow(string s, string t) {
        int n1 = s.size();
        int n2 = t.size();
        int l = 0;
        unordered_map<char, int> need;
        unordered_map<char, int> window;
        int mini = INT_MAX;
        int start = 0;
        int formed = 0;
        for (char c : t) need[c]++;
        int req = need.size();
        for (int r = 0; r < s.size(); r++) {
            window[s[r]]++;
            if (need.count(s[r]) && need[s[r]] == window[s[r]]) formed++;
            while (formed == req) {
                if (mini > r - l + 1) {
                    start = l;
                    mini = r - l + 1;
                }
                window[s[l]]--;
                if (need.count(s[l]) && window[s[l]] < need[s[l]]) formed--;
                l++;
            }
        }
        if (mini == INT_MAX) return "";
        else return s.substr(start, mini);
    }
};
