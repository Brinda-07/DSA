class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<string>st;
        int ans=0;
        for(int i=0;i<arr1.size();i++)
        {
            string str=to_string(arr1[i]);
            string prefix="";
            for (auto it:str)
            {
                prefix=prefix+it;
                st.insert(prefix);

            }
        }

        for(int i=0;i<arr2.size();i++)
        {
            string str1=to_string(arr2[i]);
            string prefix="";
            for(auto it:str1)
            {
                prefix=prefix+it;
                if(st.find(prefix)!=st.end())
                {
                    ans=max(ans,(int)prefix.size());
                }
            }

        }
        return ans;

        
    }
};
