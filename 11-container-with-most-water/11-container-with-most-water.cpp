class Solution {
public:
    int maxArea(vector<int>& height) {
       int l=0,n=height.size()-1,result=0;
        while(l<n)
        { result=max(result, min(height[l], height[n]) * (n - l));
            if (height[l] < height[n] )l++;
            else n--;
        }
        return result;
        
    }
};