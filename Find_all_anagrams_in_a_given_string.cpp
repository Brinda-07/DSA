class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pmap(26, 0);
        vector<int> smap(26, 0);

        for (char c : p)
            pmap[c - 'a']++;

        int l = 0, r = 0;
        vector<int> ans;

        while (r < s.size()) {
            smap[s[r] - 'a']++;

            if (r - l + 1 > p.size()) {
                smap[s[l] - 'a']--;
                l++;
            }

            if (r - l + 1 == p.size() && smap == pmap) {
                ans.push_back(l);
            }

            r++;
        }

        return ans;
    }
};
