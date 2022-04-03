class Solution {
public:
    void subset(vector<int>&nums,vector<int>&a,int ind,int xorsum)
    {
        if(ind==nums.size())
        {
            a.push_back(xorsum);
            return ;
        }
        subset(nums,a,ind+1,xorsum^nums[ind]);
        subset(nums,a,ind+1,xorsum);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int>a;
        subset(nums,a,0,0);
        int sum=0;
        for(int i=0;i<a.size();i++)
        {
            sum+=a[i];
        }
        return sum;
    }
};