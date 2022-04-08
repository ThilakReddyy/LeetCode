class Solution {
public:
    int uniquePaths(int m, int n) {
          int N = n + m - 2;
            m = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= m; i++)
                res = res * (N - m + i) / i;
            return (int)res;
    }
};