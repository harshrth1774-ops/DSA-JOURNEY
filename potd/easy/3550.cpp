class Solution {
public:
    int fun(int n){

        string s = to_string(n);
        int sum = 0;

        for(char ch : s){

            sum = sum + (ch - '0');  
        }

        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        
       int n = nums.size();

       for(int i = 0; i<n; i++){

        int addition  = fun(nums[i]);

        if(i == addition)
            return i;
    
       }
    return -1;

    }
};