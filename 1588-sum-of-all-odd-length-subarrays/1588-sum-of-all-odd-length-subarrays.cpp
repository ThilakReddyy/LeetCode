class Solution {
public:
    template<typename T>
    void pop_front(std::vector<T> &v)
    {
        if (v.size() > 0) {
            v.erase(v.begin());
        }
    }
    int sumOddLengthSubarrays(vector<int>& arr) {
        int len = arr.size();
		for(int i=1; i<len;i++)arr[i] += arr[i-1];
		int res=0;
		for(int windowSize=1; windowSize<=len; windowSize+=2)
		{
			int b = 0; 
			int e = windowSize-1; 

			while(e < len)
			{
				res += arr[e] - (b>0 ? arr[b-1] : 0);
				b++; // move sliding window by 1 
				e++; // move sliding window by 1
			}    
		}

		return res;
    }
};