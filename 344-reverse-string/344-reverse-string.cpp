class Solution {
public:
  
   
    void reverseString(vector<char>& s,int index=0) {
        int p=s.size();
       if((p/2)-1<index)return ;
        int temp=s[index];
        s[index]=s[p-1-index];
        s[p-1-index]=temp;
        reverseString(s,index+1);
    }
};
 
       