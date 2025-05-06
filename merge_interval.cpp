class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        vector<vector<int>> result;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        result.push_back(arr[0]);
        for(int i = 1 ; i<n ; i++)
        {
            vector<int>& lastInterval  = result.back();
            if(lastInterval[1]>=arr[i][0])
            {
                lastInterval[1] = max(lastInterval[1],arr[i][1]);
            }
            else {
                result.push_back(arr[i]);
            }
        }
        return result;
        // Code here
    }
};