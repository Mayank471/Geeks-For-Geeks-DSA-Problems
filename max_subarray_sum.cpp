class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int n=arr.size();
        int sum1=arr[0],sum2=arr[0];
        for(int i=1;i<n;i++)
        {
           sum1=max(sum1+arr[i],arr[i]);
           sum2=max(sum1,sum2);
        }
        return sum2;
        // code here...
    }
};