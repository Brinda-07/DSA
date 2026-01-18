class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(),houses.end());
        sort(heaters.begin(),heaters.end());
        vector<int> res(houses.size(), INT_MAX);


        //rhs
        int i=0;
        int h=0;
        while(i<houses.size() && h<heaters.size())
        {
            if(houses[i]<=heaters[h]){
            res[i]=heaters[h]-houses[i];
            i++;
            }
            else
            h++;

        }
        //lhs
        int j=houses.size()-1;
        int k=heaters.size()-1;
        while(j>=0 && k>=0)
        {
            if(houses[j]>=heaters[k]){
            res[j]=min(res[j],houses[j]-heaters[k]);
            j--;
            }
            else
            k--;
        }
        return *max_element(res.begin(),res.end());

        
        
    }
};
