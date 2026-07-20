class Solution {
public:
void solve(int ind,int sum,int k,int n,vector<int>&ds, vector<vector<int>>&ans)
{
    if(ds.size()==k)
    {
        if(n==sum)
        ans.push_back(ds);
        return;
    }
    for(int i=ind;i<=9;i++)
    {
        ds.push_back(i);
        sum=sum+i;
        solve(i+1,sum,k,n,ds,ans);
        sum=sum-ds.back();
        ds.pop_back();
    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>ans;
        solve(1,0,k,n,ds,ans);
        return ans;

        
    }
};
