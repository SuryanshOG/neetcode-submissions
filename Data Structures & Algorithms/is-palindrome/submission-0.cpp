class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size() - 1;
        for (char &c : s) if (c >= 'A' && c <= 'Z') c |= 32;
        while (l < r) {
            if (!isalnum(s[l])) l++;
            else if (!isalnum(s[r])) r--;
            else if (s[l] == s[r]) {
                l++;
                r--;
            }
            else return false;
        }
        return true;
    }
};