class Solution {
public:
    int climbStairs(int n) {
        int first=1,second=2;
        if(n<=2)return n;
        int noofways=0;
        for(int i=2;i<n;i++)
        {
            noofways=first+second;
            first=second;
            second=noofways;
        }
        return second;
    }
};