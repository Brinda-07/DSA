class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto it: arr)
        {
            mp[it]++;
        }
        unordered_set<int>st;
        for(auto it:mp)
        {
            st.insert(it.second);
        }
        if(st.size()==mp.size())
        return true;
        else
         return false;
        
    }
};
