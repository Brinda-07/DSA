class Solution {
public:
    int check(vector<int>& nums, int mid) {
        int count = 1;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] + sum <= mid)
                sum = sum + nums[i];
            else {
                count++;
                sum = nums[i];
            }
        }
        return count;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(nums, mid) <= k) {
                high = mid - 1;
                ans = mid;
            } else
                low = mid + 1;
        }
        return ans;
    }
};
