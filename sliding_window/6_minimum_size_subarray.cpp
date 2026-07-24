/*bruteforce */
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int n = nums.size();
        int ans = INT_MAX;
        long long check = 0;
        
        for(int i = 0; i<n; i++){
            check += nums[i];
        }

        if(check < target) return 0;

        for(int i = 0; i<n; i++){

            long long sum = 0;
            for(int j = i; j<n; j++){

                sum += nums[j];
                
                if(sum >= target){
                    ans = min(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};

/* tc = O(n)*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int n = nums.size();
        int i = 0, j = 0;
        long long sum = 0;
        int ans = INT_MAX;

        while (j < n) {
            sum += nums[j];

            while (sum >= target) {
                ans = min(ans, j - i + 1);
                sum -= nums[i];
                i++;
            }

            j++;
        }

        return ans == INT_MAX ? 0 : ans;
    }
};