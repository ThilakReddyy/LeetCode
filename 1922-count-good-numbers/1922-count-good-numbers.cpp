class Solution {
public:
     const int M = 1000000007;
      int countGoodNumbers(long long n) {
        return (int)(fast_pow(5,(n+1)/2)*fast_pow(4,(n/2))%M);
    }
    long long fast_pow(int base, long long n)
    {
        if(n==0)
           return 1;
        if(n==1)
            return base;
        long long halfn=fast_pow(base,n/2);
        if(n%2==0)
            return ( halfn * halfn ) % M;
        else
            return ( ( ( halfn * halfn ) % M ) * base ) % M;
    }
};