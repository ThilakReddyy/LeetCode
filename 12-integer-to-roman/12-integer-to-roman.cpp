class Solution {
public:
    string intToRoman(int num) {
         string romans[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int value[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        int seqSize = sizeof(romans);
        int idx = 12;
        string ans = "";
        while(num>0){
           while(value[idx]<=num)
           {
                ans += romans[idx];
               num=num-value[idx];
           }
            idx--;
            
        }
        return ans;
    }
};