//approach-1:----------------------------------------------->two pointer i and j
class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int n = arr.size();
        int i = 0, j = 0;
        vector<int> result;
        queue<int> q;

        while (j < n) {
            if (arr[j] < 0) q.push(arr[j]);

            if (j - i + 1 == k) {
                if (!q.empty()) 
                    result.push_back(q.front());
                else 
                    result.push_back(0);

                if (!q.empty() && arr[i] < 0) {
                    q.pop();
                }
                i++;
            }
            j++;   
        }
        return result;
    }
};

//approach-2:--------------------------------------------------------------------->coder army
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        queue<int> q;
        vector<int> ans;
        int n = arr.size();

        // push indices of negative numbers for the first k-1 elements
        for (int i = 0; i < k - 1; i++) {
            if (arr[i] < 0) {
                q.push(i);
            }
        }

        // process each window ending at i (i from k-1 to n-1)
        for (int i = k - 1; i < n; i++) {
            if (arr[i] < 0) {
                q.push(i);
            }

            // ab baari aati hai print karaane ki
            if (q.empty()) {
                ans.push_back(0);
            } else {
                // remove out-of-window indices (must do before using front)
                if (q.front() <= i - k) {
                    q.pop();
                }

                if (q.empty()) {
                    ans.push_back(0);
                } else {
                    ans.push_back(arr[q.front()]);
                }
            }
        }

        return ans;
    }
};
