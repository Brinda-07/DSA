class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>nums=arr;
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int rank=1;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.find(nums[i])==mp.end())
            {
                mp[nums[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            arr[i]=mp[arr[i]];
        }
        return arr;
        
    }
};
