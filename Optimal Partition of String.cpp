class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;
        int c=1;
        for(auto it:s)
        {
            if(st.find(it)==st.end())
            st.insert(it);
            else
            {
                c++;
                st.clear();
                st.insert(it);
            }
        }
        return c;
        
    }
};
