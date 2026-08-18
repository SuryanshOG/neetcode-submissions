class Solution {
public:
    void m(vector<int>& arr, int l, int mid, int r) {
        vector<int> temp;
        int i = l;
        int j = mid  + 1;
        while (i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else temp.push_back(arr[j++]);
        }
        while(i <= mid) temp.push_back(arr[i++]);
        while(j <= r) temp.push_back(arr[j++]);
        for(int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
    }
    void ms(vector<int>& nums, int l, int r) {
        if (l >= r) return;
        int mid = l + (r - l) / 2;
        ms(nums, l, mid);
        ms(nums, mid + 1, r);
        m(nums, l,mid,r);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        ms(nums, l,r);
        return nums;
    }
};