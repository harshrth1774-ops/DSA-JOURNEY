//tc = O(n^3)
class Solution {
public:
    long long pulse(vector<int>arr){

        long long sum = 0;
        for(int i = 0; i<arr.size(); i++){

            if(i % 2 == 0){
                sum += arr[i];
            }else{
                sum -= arr[i];
            }
        }
        return sum;
    }
    long long maxValue(vector<int>& nums) {
        
        int n = nums.size();

        long long ans = pulse(nums);
        
        for(int l = 0; l<n; l++){

            for(int r = l+1; r<n; r++){

                vector<int>temp = nums;
                int first = temp[l];

                for(int k = l; k<r; k++){
                    
                    temp[k] = temp[k+1];
                }
                temp[r] = first;

                long long val = pulse(temp);
                ans = max(ans,val);
            }
        }
        return ans;
    }
};