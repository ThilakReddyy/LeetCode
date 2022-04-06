class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
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