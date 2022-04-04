class Solution {
public:
    int minPartitions(string n) {
        char p='0';
        for(int i=0;i<n.size();i++)
        {
            if(n[i]>p)p=n[i];
        }
        return p-'0';
    }
};