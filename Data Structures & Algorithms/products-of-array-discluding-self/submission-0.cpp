class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int pre = 1;
        int suf = 1;
        for (int i = 0; i < nums.size(); i++) {
            res[i] = pre;
            pre *= nums[i];
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            res[i] *= suf;
            suf *= nums[i]; 
        }
        return res;
    }
};
