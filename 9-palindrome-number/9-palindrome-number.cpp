class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        x=s.length();
        for(int i=0;i<x/2;i++)
        {
            if(s[i]!=s[x-i-1])return false;
        }
        return true;
    }
};