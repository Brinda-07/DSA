class Solution {
public:
    int minPartitions(string n) {
        
        int maxi=INT_MIN;
        for(auto it :n)
        {
            maxi=max(maxi,it-'0');
        }
        return maxi;
    }
};
