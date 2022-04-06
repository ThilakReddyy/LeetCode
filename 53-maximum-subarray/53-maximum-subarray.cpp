class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,maxi=INT_MIN;
        for(int it:nums)
        {
             sum+=it;
            maxi=max(sum,maxi);
            if(sum<0)sum=0;
        }
        return maxi;
    }
};