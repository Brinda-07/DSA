class Solution {
public:
    string removeOuterParentheses(string s) {
        int open=0;
    
        string ans;
        for(auto it:s)
        {
            if(it=='(' )
            {
                if(open>0)
                ans=ans+'(';
                open++;
            }
            if(it==')')
            {
                open--;
                if(open>0)
                ans=ans+')';
            }
        }
        return ans;
       
       
        
    }
};
