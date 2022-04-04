class Solution {
public:
    vector<int> minOperations(string boxes) {
         int n=boxes.size();
        vector<int>res;
        for(int i=0;i<n;i++)
        {
            int steps=0;
            for(int j=i;j<n;j++)
            {
                if(boxes[j]=='1')
                    steps+=(j-i);
            }
            res.push_back(steps);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            int steps=0;
            for(int j=i;j>=0;j--)
            {
                if(boxes[j]=='1')
                    steps+=(i-j);
            }
            res[i]+=steps;
        }
        return res;
    }
};