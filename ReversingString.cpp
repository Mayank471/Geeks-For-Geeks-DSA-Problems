class Solution {
  public:
    string reverseString(string& s) {
       int  n=s.length();
        for(int i=0;i<n/2;i++)
        {
            char temp;
            temp = s[i];
            s[i] = s[n-i-1];
            s[n-i-1] = temp;
         }
         return s;
        // code here
    }
};