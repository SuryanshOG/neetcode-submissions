#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for (string x : strs) {
            s+=to_string(x.size()) + '#' + x;
        }
        return s;
    }

    vector<string> decode(string s) {
        int i = 0;
        int n = s.size();
        vector<string> ans;
        while (i < n) {
            int j = i;
            while (s[j] != '#') j++;
            int len = stoi(s.substr(i, j - i));
            ans.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return ans;
    }
};
