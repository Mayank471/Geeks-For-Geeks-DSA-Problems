#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the days of buying and selling stock for max profit.
    int stockBuySell(vector<int> &arr) {
        int n = arr.size();
        int profit = 0;
        int i = 0;

        while (i < n - 1) {
            // Find the local minima
            while (i < n - 1 && arr[i + 1] <= arr[i]) {
                i++;
            }
            if (i == n - 1) break;
            int buy = i++;

            // Find the local maxima
            while (i < n && arr[i] >= arr[i - 1]) {
                i++;
            }
            int sell = i - 1;

            profit += arr[sell] - arr[buy];
        }

        return profit;
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum profit: " << sol.stockBuySell(prices) << endl;
    return 0;
}