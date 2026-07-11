/*
tc = O(n * log(k))
sc = O(k) heap of size never exceeds by 3

*/

class Solution {
  public:
    vector<int> kthLargest(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        vector<int>ans(n);
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i = 0; i<n; i++){
            
            if(pq.size() < k-1){
                ans[i] = -1; 
                pq.push(arr[i]);
            }else{
                
                if(i == k-1){
                    
                    pq.push(arr[i]);
                    ans[i] = pq.top();
                }else{
                    
                    if(arr[i] > pq.top()){
                        pq.pop();
                        pq.push(arr[i]);
                        ans[i] = pq.top();
                    }else{
                        ans[i] = pq.top();
                    }
                }
            }
            
        }
        return ans;
    }
};