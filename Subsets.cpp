class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0, ans, nums, nums.size(), curr);
        return ans;
    }
    void solve(int ind, vector<vector<int>>& ans, vector<int> &nums, int n,
               vector<int>& curr) {
        if (ind == n) {
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[ind]);
        solve(ind + 1, ans, nums, n, curr);
        curr.pop_back();
        solve(ind + 1, ans, nums, n, curr);
    }
};
