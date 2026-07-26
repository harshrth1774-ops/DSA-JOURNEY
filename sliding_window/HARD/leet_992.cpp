class Solution {
public:
   int fun(vector<int>nums, int k){
    
    int n = nums.size();
    int i = 0;
    int j = 0;
    unordered_map<int,int>mp;
    int cnt = 0;

    while(j < n){

        mp[nums[j]]++;

        while(mp.size() >= k){

            cnt += n - j;
            mp[nums[i]]--;

            if(mp[nums[i]] == 0){
                mp.erase(nums[i]);
            }
            i++;

        }
        j++;
        
    }

    return cnt;
}

    int subarraysWithKDistinct(vector<int>& nums, int k) {

     return fun(nums,k) - fun(nums,k+1);   
    }
};