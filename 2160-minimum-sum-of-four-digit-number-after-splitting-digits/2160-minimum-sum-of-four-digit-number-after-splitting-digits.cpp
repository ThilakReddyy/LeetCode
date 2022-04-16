class Solution {
public:
    int minimumSum(int num) 
    {
        vector<int> ans;
        for(int i=0;i<4;i++)
        {
           ans.push_back(num%10);
           num/=10;
        }
        sort(ans.begin(),ans.end());
        int new1=(ans[0]*10)+ans[2];
        int new2=(ans[1]*10)+ans[3];
        return new1+new2;
        
    }
};