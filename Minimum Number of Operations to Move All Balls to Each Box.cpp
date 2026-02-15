class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans(boxes.size(),0);
        int ballcount=0;
        int cost=0;

        for(int i=0;i<boxes.size();i++)
        {
            ans[i]+=cost;
           
            if(boxes[i]=='1')
            ballcount++;
             cost=cost+ballcount;
        }
        ballcount=0;
        cost=0;
        for(int i=boxes.size()-1;i>=0;i--)
        {
            ans[i]+=cost;
            
            if(boxes[i]=='1')
            ballcount++;
            cost=cost+ballcount;
        }
        return ans;
        
    }
};
