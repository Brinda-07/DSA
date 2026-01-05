class Solution {
public:
int check(vector<int>&nums,int mid)
{
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        sum=sum+(ceil(((double)nums[i]/(double)mid)));
    }
    return sum;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int ans=0;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(nums,mid)<=threshold)
            {
            high=mid-1;
            ans=mid;
            }
            else
            low=mid+1;
        }
        return ans;
        
    }
};
