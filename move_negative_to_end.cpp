class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n=arr.size();
        vector<int> temp(n);
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>=0) temp[j++]=arr[i];
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0) temp[j++]=arr[i];
        }
        arr=temp;
    }
    
};