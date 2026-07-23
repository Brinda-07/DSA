class Solution {
public:
    void solve(int ind, vector<int>& nums, int curror, int& count, int maxor) {
        if (ind == nums.size()) {

            if (curror == maxor)
                count++;
            return;
        }

        solve(ind + 1, nums, curror | nums[ind], count, maxor);

        solve(ind + 1, nums, curror, count, maxor);
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxor = 0;
        for (auto it : nums)
            maxor = maxor | it;

        int count = 0;

        solve(0, nums, 0, count, maxor);
        return count;
    }
};
