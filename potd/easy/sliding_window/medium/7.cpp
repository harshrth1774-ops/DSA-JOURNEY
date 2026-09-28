class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int n = nums.size();
        int i = 0, j = 0;
        long long cnt = 0;
        unordered_map<int,int>mp;
        long long maxElement = *max_element(nums.begin(),nums.end());
        mp[maxElement] = 0;
 

        while(j < n){

            mp[nums[j]]++;

            while(mp[maxElement] >= k){

                cnt++;
                cnt += n - 1 - j;
                mp[nums[i]]--;
                i++;
            }


            j++;
        }
        return cnt;
    }
};