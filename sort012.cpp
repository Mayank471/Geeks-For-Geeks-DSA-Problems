class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int m=0,n=0,o=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0) m++;
            if(arr[i]==1) n++;
            if(arr[i]==2) o++;
        }
        for(int i=0;i<m;i++) arr[i]=0;
        for(int i=0;i<n;i++) arr[i+m]=1;
        for(int i=0;i<o;i++) arr[i+m+n]=2;
        
        
    }
};