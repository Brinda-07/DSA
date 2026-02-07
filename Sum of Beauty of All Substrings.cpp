class Solution {
public:
    int beautySum(string s) {
        int beauty = 0;
        for (int i = 0; i < s.size(); i++) {
            unordered_map<char, int> mp;
            for (int j = i; j < s.size(); j++) {
                mp[s[j]]++;
                int minfreq = INT_MAX;
                int maxfreq = INT_MIN;
                for (auto it : mp) {
                    if (it.second > maxfreq)
                        maxfreq = it.second;
                    if (it.second < minfreq && it.second != 0)
                        minfreq = it.second;
                }
                beauty = beauty + (maxfreq - minfreq);
            }
           
        }
        return beauty;
    }
};
