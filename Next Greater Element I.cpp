class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(), -1);
        stack<int> st;
        unordered_map<int, int> mp;

        for (auto it : nums2) {
            while (!st.empty() && st.top() < it) {
                mp[st.top()] = it;
                st.pop();
            }
            st.push(it);
        }

        for (int i = 0; i < ans.size(); i++) {
            if (mp.find(nums1[i]) != mp.end())

            {
                ans[i] = mp[nums1[i]];
            }
        }
        return ans;
    }
};
