class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        stack<long long>st;

        for(int i=0;i<nums.size();i++)
        {
           
            long long x=nums[i];
            while(!st.empty() && st.top()==x)
            {
                x=x*2;
                st.pop();

            }
            st.push(x);
        }
        vector<long long>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
