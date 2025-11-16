class Solution {
public:
//------------------------------------------------writing comments bcz my brain forgets faster
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp; 
        int c = 0;    // prefix balance (1 -> +1, 0 -> -1)
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {

            // 0 ko -1 treat karna, 1 ko +1
            if(nums[i] == 0) c--;
            else c++;

            // c == 0 -> start se yahan tak balance
            if(c == 0) 
                ans = max(ans, i + 1);

            // agar balance value pehle dekhi hai
            // means us index ke baad se yahan tak sum = 0
            if(mp.find(c) != mp.end()) {
                ans = max(ans, i - mp[c]);
            }
            else {
               
                mp[c] = i;
            }
        }

        return ans;
    }
};
