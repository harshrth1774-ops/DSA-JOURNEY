class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int>maxi(n);
        vector<int>mini(n);

        int largest = INT_MIN;

        for(int i = 0; i<n; i++){

            if(nums[i] >= largest){

             largest = nums[i];
             maxi[i] = largest;   
            }else{
                maxi[i] = largest;
            }
        }

        int smallest = INT_MAX;
        for(int i = n-1; i>=0; i--){

            if(nums[i] <= smallest){
                smallest = nums[i];
                mini[i] = smallest;
            }else{
                mini[i] = smallest;
            }
        }
        

        for(int i = 0; i<n; i++){

            if(maxi[i] - mini[i] <= k){

                return i;
            }
        }
        return -1;
        
    }
};