class Solution {
public:
    int minElement(vector<int>& nums) {
        int minele=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            int x=nums[i];
            while(x!=0)
            {
                sum=sum+(x%10);
                x=x/10;
                
            }
            minele=min(minele,sum);

        }
        return minele;
        
    }
};
