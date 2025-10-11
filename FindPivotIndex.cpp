class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftsum(n, 0), rightsum(n, 0);

        // leftsum[i] = sum of nums[0..i-1]
        for (int i = 1; i < n; i++) {
            leftsum[i] = leftsum[i-1] + nums[i-1];
        }

        // rightsum[i] = sum of nums[i+1..n-1]
        for (int i = n-2; i >= 0; i--) {
            rightsum[i] = rightsum[i+1] + nums[i+1];
        }

        // check pivot
        for (int i = 0; i < n; i++) {
            if (leftsum[i] == rightsum[i]) return i;
        }
        return -1;
    }
};
