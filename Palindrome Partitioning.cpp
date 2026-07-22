class Solution {
public:
    bool ispalin(string temp) {
        int left = 0;
        int right = temp.size() - 1;
        while (left < right) {
            if (temp[left] != temp[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
    void solve(int ind, string& s, vector<string>& ds,
               vector<vector<string>>& ans) {
        if (ind == s.size()) {
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < s.size(); i++) {
            string temp = s.substr(ind, i - ind + 1);
            if (ispalin(temp)) {
                ds.push_back(temp);
                solve(i + 1, s, ds, ans);
                ds.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> ds;
        vector<vector<string>> ans;
        solve(0, s, ds, ans);
        return ans;
    }
};
