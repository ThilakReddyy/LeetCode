class Solution {
public:
    string convert(string s, int numRows) {
        string sp="";
        if(numRows==1)return s;
        for(int i=0;i<numRows;i++)
        {
            int j=i;
            while(j<s.length())
            { 
               
               //if((j-2*i)>0 && i!=0 && i!=numRows-1)sp+=s[j-2*i];
             sp+=s[j];

                if(j+2*(numRows-1-i)<s.length() && i!=0 && i!=numRows-1)sp+=s[j+2*(numRows-i-1)];
                
                j+=2*(numRows-1);
            }
        }
        return sp;
    }
};