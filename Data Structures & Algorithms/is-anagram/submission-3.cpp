#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ch(26,0);
        for(char c : s) ch[c - 'a']++;
        for (char c : t) ch[c - 'a']--;
        for (int x : ch) if(x != 0) return false;
        return true;
    }
};
