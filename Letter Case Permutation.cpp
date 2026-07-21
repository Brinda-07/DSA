class Solution {
public:
void solve(int ind,string &s,vector<string>&ans)
{
    if(ind==s.size())
    {
        ans.push_back(s);
        return;
    }
    if(isalpha(s[ind]))
    {
        s[ind]=toupper(s[ind]);
        solve(ind+1,s,ans);
        s[ind]=tolower(s[ind]);
        solve(ind+1,s,ans);
    }
    else
    solve(ind+1,s,ans);


}
    vector<string> letterCasePermutation(string s) {
        
        vector<string>ans;
        solve(0,s,ans);
        return ans;
        
    }
};
