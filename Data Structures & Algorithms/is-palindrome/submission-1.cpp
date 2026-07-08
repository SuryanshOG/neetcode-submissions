#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> nums;
        for (char c : s) if(isalnum(c)) nums.push_back(tolower(c));
        int l = 0;
        int r = nums.size() - 1;
        while(l < r) {
            if (nums[l] != nums[r]) return false;
            l++;
            r--;
        }
        return true;
    }
};
