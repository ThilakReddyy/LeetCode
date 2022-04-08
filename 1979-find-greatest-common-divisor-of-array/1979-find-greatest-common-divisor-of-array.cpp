class Solution {
public:
    int gcd(int a,int b,vector<vector<int>>&dp)
    {
        if (a == 0)  return b;
        if (b == 0)  return a;
        if (a == b)  return a;
        if(dp[a][b]!=-1)return dp[a][b];
        if (a > b) return dp[a][b] = gcd(a-b, b,dp);
        return  dp[a][b] = gcd(a, b-a,dp);
    }
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i:nums)
        {
            if(mini>i)
            {
                mini=i;
            }
            if(maxi<i)
            {
                maxi=i;
            }
        }
        vector<vector<int>>dp(1001,vector<int>(1001,-1));
        return gcd(mini,maxi,dp);
        
    }
};