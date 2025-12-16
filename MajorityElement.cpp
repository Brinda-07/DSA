class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int el=0;
        for(int i=0;i<nums.size();i++)
        {
            if(c==0)
            {
                el=nums[i];
                c++;
            }
            else if(el==nums[i])
            c++;
            else
            c--;
        }
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(el==nums[i])
            count++;
        }
        if(count>nums.size()/2)
        return el;
        else
        return -1;
        
    }
};
