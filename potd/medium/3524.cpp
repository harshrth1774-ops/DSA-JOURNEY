
// TC: O(n²) because we check every possible subarray.
// SC: O(k) for the answer array.
class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        int n = nums.size();
        vector<long long> ans(k, 0);

        for (int i = 0; i < n; i++) {

            long long product = 1;

            for (int j = i; j < n; j++) {

                product = (product * nums[j]) % k;

                ans[product]++;
            }
        }

        return ans;
    }
};
