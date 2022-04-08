class Solution {
public:
    int gcd(int a,int b)
    {
        return b == 0 ? a : gcd(b, a % b);   
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
        return gcd(mini,maxi);
        
    }
};