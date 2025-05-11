class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        pair<long long,long long> MinMax;
        int n = arr.size();
        MinMax.first = MinMax.second = arr[0];
        for(int i = 0; i <n;i++ )
        {
            if(arr[i]>MinMax.second)MinMax.second = arr[i];
            if(arr[i]<MinMax.first) MinMax.first = arr[i];
        }
        return MinMax;
    }
};