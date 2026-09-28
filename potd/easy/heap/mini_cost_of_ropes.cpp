//approach-1 using priority queue
//tc = o(n*logn)
class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i = 0; i<arr.size(); i++){
         pq.push(arr[i]);  
        }
        
        int cost = 0;
        while(pq.size() > 1){
            
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            
            int sum = first + second;
            pq.push(sum);
            cost = cost + sum;
        }
        return cost;
        
    }
};