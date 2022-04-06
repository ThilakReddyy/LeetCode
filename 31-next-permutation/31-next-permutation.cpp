class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind,in,n=nums.size();
        for(ind=n-2;ind>=0;ind--)
        {
            if(nums[ind+1]>nums[ind])
            {
                break;
            }
        }
        if(ind>=0)
        {
       
            for(in=n-1;in>ind;in--)
            {
                if(nums[ind]<nums[in])
                {
                    break;
                }
            }
            swap(nums[in],nums[ind]);
        }
        reverse(nums.begin()+ind+1,nums.end());
    } 
    
};