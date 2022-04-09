class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ret(2);
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                ret[0]=mp[target-nums[i]];
                ret[1]=i;
                return ret;
            }
            mp[nums[i]]=i;
        }
        return ret;
    }
};