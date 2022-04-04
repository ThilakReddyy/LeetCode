class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans1(n,0);
        vector<int> ans2(n,0);
        
        int curr=0;
        for(int i=0;i<n;i++){
            if(i>0)
                ans1[i]=ans1[i-1]+curr;
            if(boxes[i]=='1')
                curr++;
        }
        curr=0;
        for(int i=n-1;i>=0;i--){
            if(i<n-1)
                ans2[i]=ans2[i+1]+curr;
            if(boxes[i]=='1')
                curr++;
        }
        
        for(int i=0;i<n;i++) ans1[i]+=ans2[i];
        return ans1;
    }
};