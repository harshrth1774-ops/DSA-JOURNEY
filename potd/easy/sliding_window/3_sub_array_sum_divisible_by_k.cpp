/*

Time Complexity: O(n) — We visit each element once, and each map operation takes O(1) on average.
*/
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        int n = nums.size();
        long long prefixSum  = 0;
        int cnt = 0;
        
        unordered_map<int,int>mp;
        mp[0] = 1;
        for(int i = 0; i<n; i++){

            prefixSum += nums[i];

            int rem = prefixSum % k;
            if(rem < 0){
                rem  = rem + k;
            }
            if(mp.count(rem)){

                cnt += mp[rem];
                mp[rem]++;
            }else{
                mp[rem]++;
            }

        }
        return cnt;
    }
};