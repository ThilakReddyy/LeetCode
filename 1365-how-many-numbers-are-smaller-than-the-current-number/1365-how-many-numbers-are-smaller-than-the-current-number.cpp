class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a;
        int n=nums.size();
        for(int i=0;i<n;i++)a.push_back(nums[i]);
        sort(a.begin(),a.end());
        unordered_map<int,int>s;
        for(int i=0;i<n;i++)
        {
            if(s[a[i]]!=0)continue;
            s[a[i]]=i+1;
        }
        for(int i=0;i<n;i++)
        {
            a[i]=s[nums[i]]-1;
        }
        return a;
    }
};