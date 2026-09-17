class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        
        int n = arr.size();
        int i = 0, j = 0;
        int currsum = 0;
        int ans = INT_MAX;

        vector<int>bestofi(n,INT_MAX);

        while(j < n){

            currsum += arr[j];

            while(currsum > target){
                currsum -= arr[i];
                i++;
            }

            if(currsum == target){

                int currlen = j-i+1;

                if(i-1 >= 0 && bestofi[i-1] != INT_MAX){
                    ans = min(ans, currlen + bestofi[i-1]);
                }

                if(j == 0){
                    bestofi[j] = currlen;
                }else{
                    bestofi[j] = min(bestofi[j-1], currlen);
                }

            }else{

                if(j > 0){
                    bestofi[j] = bestofi[j-1];
                }
            }

            j++;
        }

        return ans == INT_MAX ? -1 : ans;
    }
};