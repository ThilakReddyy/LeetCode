class Solution {
public:
    int uniquePaths(int m, int n) {
          n = n + m - 2;
            m = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= m; i++)
                res = res * (n - m + i) / i;
            return (int)res;
    }
};