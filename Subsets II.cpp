class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>curr;
        solve(0,nums,curr,ans);
        return ans;
        
    }
    void solve(int ind,vector<int>nums,vector<int> &curr,vector<vector<int>> &ans)
    {
        ans.push_back(curr);
        for(int i=ind;i<nums.size();i++)
        {
            if(i!=ind && nums[i]==nums[i-1])
            continue;

            curr.push_back(nums[i]);
            solve(i+1,nums,curr,ans);
            curr.pop_back();
        }

    }
};
