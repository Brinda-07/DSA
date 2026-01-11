class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size()-1;
        int count=0;
        for(k=nums.size()-1;k>=0;k--)
        {
            int i=0;
            int j=k-1;
            while(i<j)
            {
                if(nums[i]+nums[j]>nums[k])
                {
                    count=count+(j-i);
                    j--;
                }
                else
                i++;
            }
        }
        return count;

        
    }
};
