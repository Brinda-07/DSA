class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
            {
                mp[nums[i]]++;
            }
        if(n%k!=0)
            return false;
        int tot=n/k;
      //if any element freq is greater than total number of groups then its not possible to partition thus return false
        for(auto it:mp)
            {
                if(it.second>tot)
                    return false;
            }
        return true;
        
    }
};
