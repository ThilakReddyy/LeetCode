class Solution {
public:
    int maxProfit(vector<int>& a) {
      int maxprice=0,minprice=INT_MAX,n=a.size();
        for(int i=0;i<n;i++)
        {
            minprice=min(minprice,a[i]);
            maxprice=max(maxprice,a[i]-minprice);
        }
        return maxprice;
    }
};