class Solution {
public:
    int calc(vector<int>&nums,int goal)
    {
        int c=0;
        int l=0;
        int r=0;
        int sum=0;
        while(r<nums.size())
        {
            sum=sum+nums[r];
            while(sum>goal && l<=r)
            {
                sum=sum-nums[l];
                l++;
            }
            c=c+(r-l+1);
            r++;
        }
        return c;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int x=calc(nums,goal);
        int y=calc(nums,goal-1);
        return x-y;
        
    }
};
