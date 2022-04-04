class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>m(n);
        for(int i=0;i<n;i++)
        {
            m[i]=nums[nums[i]];
        }
        return m;
    }
};