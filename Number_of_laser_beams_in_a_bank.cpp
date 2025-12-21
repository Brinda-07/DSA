class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int m=bank.size();
        int n=bank[0].size();
        int ans=0;
        int prev=0;

        for(int i=0;i<m;i++)
        {
            int countone=0;
            for(int j=0;j<n;j++)
            {
                if(bank[i][j]=='1')
                countone++;

            }
            ans=ans+(prev*countone);
            if(countone>0)
            prev=countone;
            countone=0;

        }
        return ans;
        
    }
};
