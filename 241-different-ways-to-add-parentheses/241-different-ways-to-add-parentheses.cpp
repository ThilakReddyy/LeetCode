class Solution {
public:
   map<pair<int,int>,vector<int>>dp;
    vector<int> func(string &s,int i,int j)
    {
         vector<int>v;
        if(i>j){
            v.push_back(0);
            return v ;
            }
        if(!dp[{i,j}].empty())
            return dp[{i,j}];
        if(i==j){
            v.push_back(s[i]-'0');
            return dp[{i,j}]= v ;
            }
        if(j-i==1)
        {
            v.push_back((s[i]-'0')*10+s[j]-'0');
            return dp[{i,j}]= v;
        }
       
        for(int k=i;k<=j;k++)
        {
            int temp;
            if(s[k]=='+')
            {
                vector<int>x=func(s,i,k-1);
                vector<int>y=func(s,k+1,j);
                for(auto h:x)
                {
                    for(auto l:y)
                    {
                        v.push_back(h+l);
                    }
                }
                
            }
            if(s[k]=='*')
            {
                vector<int>x=func(s,i,k-1);
                vector<int>y=func(s,k+1,j);
                for(auto h:x)
                {
                    for(auto l:y)
                    {
                        v.push_back(h*l);
                    }
                }
            }
            if(s[k]=='-')
            {
                vector<int>x=func(s,i,k-1);
                vector<int>y=func(s,k+1,j);
                for(auto h:x)
                {
                    for(auto l:y)
                    {
                        v.push_back(h-l);
                    }
                }
            }
            
        }
        return dp[{i,j}]= v;
        
    }
    
    vector<int> diffWaysToCompute(string expression) {
        
        return func(expression,0,expression.length()-1);
    }
};