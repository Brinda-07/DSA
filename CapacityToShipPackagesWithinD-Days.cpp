class Solution {
public:
    int check(vector<int>& weights, int mid) {
        int days = 1;//min day=1
        int load = 0;
        for (int i = 0; i < weights.size(); i++) {
            if (weights[i] + load > mid) {//if total load>capacity decided(mid) 
                load = weights[i];//new weights starting
                days++;//increase day
            }
            else
            load = load + weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);
        int ans = 0;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (check(weights, mid) <= days) {
                ans = mid;
                high = mid - 1;
            } else
                low = mid + 1;
        }
        return ans;
    }
};
