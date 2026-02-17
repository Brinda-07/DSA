class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m=bank.size();
        int n=bank[0].size();
        int ans=0;
        int prev=0;
        int c=0;


        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(bank[i][j]=='1')
                c++;
            }
            ans=ans+(prev*c);
            if(c>0)
            prev=c;
            c=0;

        }
        return ans;
        
    }
};
