class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
          int n=sentences.size();
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int sentencesize=sentences[i].size();
            int count=0;
            for(int sentence=0;sentence<sentencesize;sentence++)
            {
                if(sentences[i][sentence]==' ')
                {
                    count++;
                    cout<<count;
                }
            }
            cout<<endl;

            maxi=max(maxi,count);
        }
        return maxi+1;
    }
};