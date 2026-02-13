class Solution {
public:
    int countSubstrings(string s) {
        //center expansion
        int c=0;
        int left=0,right=0;
        for(int i=0;i<s.size();i++)
        {
            //odd length
            left=i;
            right=i;
            while(left>=0 && right<=s.size() && s[left]==s[right])
            {
                c++;
                left--;
                right++;
            }
            //even length
            left=i;
            right=i+1;
            while(left>=0 && right<s.size() && s[left]==s[right])
            {
                c++;
                left--;
                right++;
            }
            
        }
        return c;
        
    }
};
