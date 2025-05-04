#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int>& arr) {
        int n = arr.size();
        vector<int> temp(n);
        return mergeSortAndCount(arr, temp, 0, n - 1);
    }

  private:
    int mergeSortAndCount(vector<int>& arr, vector<int>& temp, int left, int right) {
        int mid, inv_count = 0;
        if (left < right) {
            mid = (left + right) / 2;

            inv_count += mergeSortAndCount(arr, temp, left, mid);
            inv_count += mergeSortAndCount(arr, temp, mid + 1, right);

            inv_count += mergeAndCount(arr, temp, left, mid, right);
        }
        return inv_count;
    }

    int mergeAndCount(vector<int>& arr, vector<int>& temp, int left, int mid, int right) {
        int i = left;
        int j = mid + 1;
        int k = left;
        int inv_count = 0;

        while ((i <= mid) && (j <= right)) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                inv_count += (mid + 1) - i;
            }
        }

        while (i <= mid) {
            temp[k++] = arr[i++];
        }

        while (j <= right) {
            temp[k++] = arr[j++];
        }

        for (i = left; i <= right; i++) {
            arr[i] = temp[i];
        }

        return inv_count;
    }
};
