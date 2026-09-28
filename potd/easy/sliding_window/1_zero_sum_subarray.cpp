
/*better - O(n^2)*/
class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        int n = arr.size();
        int cnt = 0;
       for(int i = 0; i<n; i++){
           
           int sum = 0;
           for(int j = i; j<n; j++){
               
               sum = sum + arr[j];
               if(sum == 0) cnt++;
           }
       }
       return cnt;
    }
}; 

