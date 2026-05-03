class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<int>st;
        for(auto it: s)
        {
            if(st.count(it))
            return it;
            st.insert(it);
        }
        return 'a';
        
    }
};
