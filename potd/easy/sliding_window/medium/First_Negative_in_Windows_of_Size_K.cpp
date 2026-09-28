// First Negative in Windows of Size K
// Platform: GeeksforGeeks
// Approach: Sliding Window + Queue
// Time Complexity: O(n)
// Space Complexity: O(k)


class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int i = 0, j = 0;
        vector<int>ans;
        
        queue<int>q;
        
        while(j < n){
            
            if(arr[j] < 0){
                q.push(arr[j]);
            }
            while(j - i + 1 == k){
                
                if(q.empty()){
                    ans.push_back(0);
                }else{
                    ans.push_back(q.front());
                }
                
                if(arr[i]  <  0){
                    q.pop();
                }
                i++;
            }
            j++;
        }
        return ans;
    }
};