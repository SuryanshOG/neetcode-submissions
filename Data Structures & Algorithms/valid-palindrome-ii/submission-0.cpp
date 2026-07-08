class Solution {
public:
    bool checker(string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if (s.size() == 0) return false;
        bool deleted = false;
        int l = 0;
        int r = s.size() - 1;
        while (l < r) {
            if(s[l] == s[r]) {
                l++;
                r--;
            } else {
                return checker(s, l + 1, r) || checker(s, l, r - 1);
            }
        }
        return true;
    }
};