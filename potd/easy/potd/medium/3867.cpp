class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<long long>prefixGcd(n);
        prefixGcd[0] = nums[0];
        int largest = nums[0];

        for(int i = 1; i<n; i++){

            largest = max(largest,nums[i]);
            prefixGcd[i] = gcd(nums[i],largest);
        }
        sort(prefixGcd.begin(),prefixGcd.end());

        int i = 0;
        int j = prefixGcd.size() - 1;
        long long ans = 0;

        while(i < j){

            if(i == j) break;
            ans += gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }
        return ans;
    }
};