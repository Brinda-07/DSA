class Solution {
public:
    int minAddToMakeValid(string s) {
        int open=0;
        int close=0;
        for(auto it: s)
        {
            if(it=='(')
            open++;
            else if(it==')')
            {
                if(open>0)
                open--;
                else
                close++;
            }
        }
        return open+close;
        
    }
};
