class Solution {
public:
    int maxProfit(vector<int>& a) {
       int dp[2] = { INT_MIN, INT_MIN };
        
        for (auto p : a)
        {
            auto dp0 = dp[0];
            dp[0] = max(dp[0], -p);
            dp[1] = max(dp[1], dp0 + p);
        }
        
        return max(0, max(dp[0], dp[1]));
    }
};