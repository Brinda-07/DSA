class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int c=0;
        int el=0;
        //MOORE VOTING ALGO FIRST FIND THE MAJORITY ELEMENT
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
        int totalcount=0;
        for(int i=0;i<nums.size();i++)
        {
            if(el==nums[i])
            totalcount++;
        }

        int leftcount=0;
        int rightcount=0;
        //RIGHT COUNT=TOTALCOUNT-LEFTCOUNT
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==el)
            leftcount++;
            rightcount=totalcount-leftcount;
            if(leftcount*2>i+1 && rightcount*2>nums.size()-i-1)
            return i;
    }
    return -1;
    
        
    }
};
