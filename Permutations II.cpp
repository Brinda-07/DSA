class Solution {
public:
    void solve(vector<bool>& vis, vector<int>& ds, vector<vector<int>>& ans,
               vector<int>& nums) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (vis[i])
                continue;
            if (i > 0 && nums[i] == nums[i - 1] && !vis[i - 1]) {
                continue;
            }
            ds.push_back(nums[i]);
            vis[i] = true;
            solve(vis, ds, ans, nums);
            vis[i] = false;
            ds.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ds;
        vector<vector<int>> ans;
        vector<bool> vis(nums.size(), false);
        solve(vis, ds, ans, nums);
        return ans;
    }
};
