class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>> st;
    
        int n=0;

        string res="";

        for(char c:s)
        {
            if(c>='0' &&c<='9')
                n=n*10+(c-'0');

          else  if(c=='[')
            {
                st.push({res,n});
                n=0;
                res="";
            }

           else if(c==']')
            {
                auto top=st.top();
                st.pop();

                string e="";

                for(int i=0;i<top.second;i++)
                    e+=res;
                res=top.first+e;
            }
            else res+=c;

        }

        return res;
    }
};