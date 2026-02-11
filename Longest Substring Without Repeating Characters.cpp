class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        string maxstr = "";
        unordered_set<char> st;
        int left = 0;
        int right = 0;
        for (right = 0; right < s.size(); right++) {
            while (st.count(s[right]) > 0) {//if char already present
                st.erase(s[left]);
                left++;
            }
            if (st.find(s[right]) == st.end())
                st.insert(s[right]);

            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};
