#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int pre = 1;
        int suf = 1;
        int n = nums.size();
        vector<int> res(n, 1);
        for (int i = 0; i < n; i++) {
            res[i] *= pre;
            pre *= nums[i];
        }
        for(int i = n - 1; i >= 0; i--) {
            res[i] *= suf;
            suf *= nums[i];
        }
        return res;
    }
};
