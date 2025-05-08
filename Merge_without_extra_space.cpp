class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int n = a.size()-1;
        for(int i=0;i<b.size();i++)
        {
            while(n>=0&&b[i]<a[n])
            {
                swap(a[n--],b[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
        // code here
    }
};