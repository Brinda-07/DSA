class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int ans = INT_MAX;
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(nums[i])) {
                ans = min(ans, i - mp[nums[i]]);
            }

            int x = nums[i];
            int sum = 0;
            while (x) {
                int d = x % 10;
                sum = sum * 10 + d;
                x = x / 10;
            }
            mp[sum] = i;
        }
        return ans == INT_MAX ? -1 : ans;
    }
};
