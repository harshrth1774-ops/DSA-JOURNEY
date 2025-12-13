//----------------------------------------------------------------------------------->brute force
class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        int flip = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                if(i+k-1 >= n){
                    return -1;
                }
                for(int j = i; j <=i+ k-1; j++){
                    nums[j] = !nums[j];
                }
                flip++;
            }
        }
        return flip;
    }
}; //TC = O(nk)