class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()>t.size())
        return false;
        int tp=0;
        int sp=0;
        for(tp=0;tp<t.size();tp++)
        {
            if(t[tp]==s[sp])
            {
                sp++;
            }
        }
        if(sp==s.size())
        return true;
        else
        return false;
        
    }
};
