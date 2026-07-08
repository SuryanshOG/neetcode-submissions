class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for (int i : nums) {
            set.insert(i);
        }
        int ans = 0;
        for (int i : nums) {
            if (set.count(i - 1) == 0) {
                int streak = 1;
                bool found = false;
                int start = i;
                while(!found) {
                    if (set.count(i + 1) == 1) {
                        streak++;
                        i++;
                    }
                    else found = true;
                }
                ans = max(ans, streak);
            }
        }
        return ans;
    }
};
