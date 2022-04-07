class Solution {
public:
    int maxProfit(vector<int>& a) {
      int maxprice=0,minprice=INT_MAX;
        for(int it:a)
        {
          if(it<minprice)  minprice=it;
            maxprice=max(maxprice,it-minprice);
        }
        return maxprice;
    }
};