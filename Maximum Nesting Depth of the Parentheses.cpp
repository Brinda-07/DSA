class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;
        for(auto it:s)
        {
            if(it=='('){
                
            count++;
            maxi=max(maxi,count);
            }
            else if(it==')')
            count--;

        }
        return maxi;
        
    }
};
