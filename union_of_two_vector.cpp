class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int> c;
        for(int i=0;i<a.size();i++) c.insert(a[i]);
        for(int i=0;i<b.size();i++) c.insert(b[i]);
        return c.size();
    }
};