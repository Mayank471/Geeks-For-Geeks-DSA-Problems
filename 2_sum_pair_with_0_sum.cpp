class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
       int n = arr.size();
        set<pair<int, int>> res;
        sort(arr.begin(), arr.end());
        int i = 0, j = n - 1;

        while (i < j) {
            if (arr[i] + arr[j] == 0) {
                res.insert({arr[i], arr[j]});
                i++;
                j--;
            } else if (arr[i] + arr[j] > 0) {
                j--;
            } else {
                i++;
            }
        }

        vector<vector<int>> result;
        for (const auto& p : res) {
            result.push_back({p.first, p.second});
        }

        return result;
    }
};