class Solution {
public:
    int solve(vector<int>&nums,int target,int check)
    {
        int ans=-1;
        int low=0;
        int high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]>target)
            {
                high=mid-1;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                ans=mid;
                if(check==1)//lower bound
                high=mid-1;
                else//upper bound
                low=mid+1;

            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>res(2);
        res[0]=solve(nums,target,1);
        res[1]=solve(nums,target,0);
        return  res;
        
    }
};
