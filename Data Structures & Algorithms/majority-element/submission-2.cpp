class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int can = 0;
        int cnt = 0;
        for (int x : nums) {
            if (cnt == 0 && cnt == 0) {
                can = x;
                cnt = 1;
            }
            else if (x == can) cnt++;
            else cnt--;
        }
        return can;
    }
};