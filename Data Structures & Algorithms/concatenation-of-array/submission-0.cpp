class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> nums2(2 * n, 0);
        for (int i = 0; i < nums.size(); i++) {
            nums2[i] = nums[i];
            nums2[i + n] = nums[i];
        }
        return nums2;
    }
};