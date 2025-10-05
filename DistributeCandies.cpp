class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int>st;
        for(auto it:candyType){
            st.insert(it);
            if(st.size()>candyType.size()/2)
            return candyType.size()/2;
        }
        return st.size();
        
    }
};
