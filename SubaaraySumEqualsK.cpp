class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        int presum=0;
        int c=0;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            presum=presum+nums[i];
            c=c+mpp[presum-k];
            mpp[presum]++;
        }
        return c;
        
    }
};
