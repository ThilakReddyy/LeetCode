class Solution {
public:
    int myAtoi(string s) {
         long long int k=0;
        long long int p=0;
        int n=s.length();
        bool neg=0,nowonlynumbers=0;
        for(int i=0;i<n;i++)
        {
            if(nowonlynumbers)
            {
                if(s[i]>47 && s[i]<58)
                {
                    p=p*10+s[i]-48;
                    if(p>INT_MAX && neg==0)return INT_MAX;
                    if(p>INT_MAX && neg==1)return INT_MIN;
                }
                else
                {
                    break;
                }
            }
            else
            {
                if(s[i]==' ')continue;
                else if(s[i]=='-')
                {
                    neg=1;
                    nowonlynumbers=1;
                }
                else if(s[i]=='+')
                {
                    neg=0;
                    nowonlynumbers=1;
                }
                else if(s[i]>47 && s[i]<58)
                {
                    p=p*10+s[i]-48;
                    nowonlynumbers=1;
                }
                else break;
            }
        }
        if(neg==1) return (0-(int)p);
        return p;
    }
};