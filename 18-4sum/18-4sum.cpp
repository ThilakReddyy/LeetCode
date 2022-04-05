class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
      sort(nums.begin(), nums.end());
      for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i-1]) // avoid duplicates
          continue;
        for (int j = i+1; j < nums.size(); j++) {
          if (j > i+1 && nums[j] == nums[j-1]) // avoid duplicates
            continue;
          int l, r;
          l = j+1;
          r = nums.size()-1;
          int need = target - nums[i] - nums[j]; // avoid integer overflow
          while (l < r) {
            int64_t s = nums[l] + nums[r];
            if (s > need)
              r--;
            else if (s < need)
              l++;
            else {
              ans.push_back({nums[i], nums[j], nums[l], nums[r]});
              l++;
              while (l < r && nums[l] == nums[l-1]) // avoid duplicates
                l++;
            }
          }
        }
      }
      return ans;
    }
};