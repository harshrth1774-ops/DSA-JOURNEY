/* bruteforce */
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int n = nums.size();
        int res = INT_MIN;

        int zeroes = count(nums.begin(),nums.end(), 0);
        if(k > zeroes) return k;

        for(int i = 0; i<n; i++){

           unordered_map<int,int>mp;

            for(int j = i; j<n; j++){

               if(nums[j] == 0){
                 mp[0]++;
               }
               if(mp[0] == k){
                int len = j - i + 1;
                res = max(res,len);
               }
               if(nums[j] == 1){
                mp[1]++;
               }
            }
        }
            
            if(res == INT_MIN) return 0;
            return res;

    }
};

/* approach sliding window*/