class Solution {
public:
long long check(vector<int>&nums,int mid)
{//mid=max bag size
    long long totalops=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]>mid)//if size of bag  jyada hai
        totalops=totalops+(nums[i]-1)/mid;//imp formula to find number of ops
    }
    return totalops;
}
    int minimumSize(vector<int>& nums, int maxOperations) {
        int low=1;//minimum possible
        int high=*max_element(nums.begin(),nums.end());//max size hi high rahega

        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(nums,mid)<=maxOperations)
            //if mid is possible we can try smaller values
            high=mid-1;
            else
            //if not possible we need to inc the penalty
            low=mid+1;
        }
        return low;
        
    }
};
