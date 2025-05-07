class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        unordered_map<int,int> d;
        vector<int> result;
        for(int i=0;i<arr.size();i++) d[arr[i]]++;

        for( auto &i : d)
        {
            if (i.second >1) result.push_back(i.first);
        }
        sort(result.begin(),result.end());
        return result;
    
        
        // code here
    }
};