class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n=s.length(), maxi=0;
        for(int i=0;i<n;i++)
        {
            string p="";
            p+=s[i];
            for(int j=i+1;j<n;j++)
            {
                if(p.find(s[j])!=-1)
                {
                    break;
                }
                else
                {
                    p+=s[j];
                }
            }
            int l=p.length();
            maxi=max(maxi,l);
        }
        return maxi;
    }
};