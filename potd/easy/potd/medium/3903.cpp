class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        int ans = INT_MAX;

        for(int i = 0; i<n; i++){

            int left =  i;
            int right = i;
            int maxi = INT_MIN;
            int mini = INT_MAX;
            while(left >= 0){

                maxi = max(maxi, nums[left]);
                left--;
            }
            while(right < n){
                mini = min(mini,nums[right]);
                right++;
            }

            if(maxi - mini <= k){
                ans = min(ans, i);
            }
        }
        
        if(ans == INT_MAX) return -1;

        return ans;
    }
};