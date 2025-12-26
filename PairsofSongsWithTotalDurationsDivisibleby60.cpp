class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>v(60);
        int c=0;
        for(auto t:time)
        {
            int a =t%60;
            if(a==0)
            c=c+v[a];
            else
            c=c+v[60-a];
            v[a]++;

        }
        return c;
        
    }
};
