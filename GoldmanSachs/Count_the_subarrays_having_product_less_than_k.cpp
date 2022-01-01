class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int end=0,start=0,result=0;
        long long product=1;
        
        for(int end=0;end<a.size();end++)
        {
            product *= a[end];
            while(end<n && product>=k)
            {
                product /=a[start];
                start++;
            }
            if(product<k)  result+= (end-start+1);
        }
        return result;
    }
};
