class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        //sorting based on starting time
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < intervals.size(); i++) {
            int first = intervals[i][0];
            int second = intervals[i][1];
            //if ans is empty or no overlap then push the existing
            if (ans.empty() || first > ans.back()[1]) {
                ans.push_back(intervals[i]);

            } 
            //if overlap choose the max interval
            else {
                ans.back()[1] = max(second, ans.back()[1]);
            }
        }
        return ans;
    }
};
