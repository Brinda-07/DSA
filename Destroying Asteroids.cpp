class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long sum = mass;
        for (auto it : asteroids) {

            if (sum >= it) {
                sum = sum + it;
            } else
                return false;
        }
        if (sum < 0)
            return false;

        return true;
    }
};
