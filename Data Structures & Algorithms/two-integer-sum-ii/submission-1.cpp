class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size() - 1;
        while (l < r) {
            int currentsum = numbers[l] + numbers[r];
            if (currentsum > target) {
                r--;
                continue;
            }
            if (currentsum < target) {
                l++;
                continue;
            }
            if (currentsum == target) {
                return {++l, ++r};
            }
        }
        return {}; 
    }
};
