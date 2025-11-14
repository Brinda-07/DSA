class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //mini lo and sang sang prices [i] se substract karte raho
        int ans=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            ans=max(ans,prices[i]-mini);
        }
        return ans;
    }
};
