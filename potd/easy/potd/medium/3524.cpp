
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


//optimise
// Time Complexity: O(n × k)
// We loop through all n elements of nums.
// For every element, we loop through all k remainders.
// So:

// TC = O(n × k)

// Space Complexity: O(k)

// We use:

// prevrem → O(k)
// currem → O(k)
// res → O(k)

// Total:

//SC = O(k)

class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<long long>prevrem(k,0);
        vector<long long>res(k,0);


        for(int i = 0; i<n; i++){

            vector<long long>currem(k,0);

            int curr = nums[i] % k;
            currem[curr]++;

            for(int oldrem = 0; oldrem < k; oldrem++){

                long long count = prevrem[oldrem];

                if(count == 0) continue;

                long long product = (long long)oldrem * nums[i] % k;

                currem[product] += count;
            }
            prevrem= move(currem);

            for(int x = 0; x<k; x++){

                res[x] += prevrem[x];
            }

        }
        return res;
    }
};