class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int result = arr[n-1]-arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]-k>0)
            {
            int minH = min(arr[0]+k,arr[i]-k);
            int maxH= max(arr[i-1]+k,arr[n-1]-k);
            result= min(result,maxH-minH);
        }}
        return result;
        // code here
    }
};