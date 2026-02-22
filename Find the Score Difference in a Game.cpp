class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int first=0;
        int second=0;
        int control=1;

        for(int i=0;i<nums.size();i++)
        {
            if((i+1)%6==0)
            {
                if(nums[i]%2==0)
                {
                    if(control==1)
                    {
                        control=2;
                        second=second+nums[i];
                    }
                    else
                    {
                        control=1;
                        first=first+nums[i];
                    }
                }

                else
                {
                    if(control==1)
                    first=first+ nums[i];
                    else
                    second=second+nums[i];
                }
            }
            else if(nums[i]%2!=0)
            {
                if(control==1)
                {
                    control=2;
                    second=second+nums[i];
                }
                else if(control==2)
                {
                    control=1;
                    first=first+nums[i];
                }
            }
            else
            {
                if(control==1)
                {
                    first=first+nums[i];
                }
                else
                second=second+nums[i];
            }
        }
        return first-second;
        
    }
};
