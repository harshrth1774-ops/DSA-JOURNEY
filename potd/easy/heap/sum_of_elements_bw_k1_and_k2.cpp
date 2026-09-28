/*
    APPROACH-1 TC = O(N(logk1 + logK2))
               SC = O(k1 + k2)

*/
class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        
        //finding the k1 smallest element
        
        priority_queue<int>pq1;
        
        for(int i = 0; i<K1; i++){
            
            pq1.push(A[i]);
        }
        
        for(int i = K1; i<N; i++){
            
            if(A[i] < pq1.top()){
                pq1.pop();
                pq1.push(A[i]);
            }
        }
        int k1_element = pq1.top();
        
        //finding k2 smallest elememt
        priority_queue<int>pq2;
        
        for(int i = 0; i<K2; i++){
            pq2.push(A[i]);
        }
        
        for(int i = K2; i<N; i++){
            
            if(A[i] < pq2.top()){
                pq2.pop();
                pq2.push(A[i]);
            }
        }
        int k2_element = pq2.top();
        
        
        
        long long sum = 0;
        for(int i = 0; i<N; i++){
            
            if(A[i] > k1_element && A[i] < k2_element){
                
                sum = sum + A[i];
            }
        }
        return sum;
    }
};

/*
APPROACH - 2
*/
class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
        // Your code goes here
        priority_queue<int>pq1;
        priority_queue<int>pq2;
        
        for(int i = 0; i<K1; i++){
            pq1.push(A[i]);
        }
        
        for(int i = 0; i<K2-1; i++){
            pq2.push(A[i]);
        }
        
        for(int i = K1; i<N; i++){
            
            if(A[i] < pq1.top()){
                pq1.pop();
                pq1.push(A[i]);
            }
        }
        
        for(int i = K2-1; i<N; i++){
            
            if(A[i] < pq2.top()){
                pq2.pop();
                pq2.push(A[i]);
            }
        }
        
        long long sum1 = 0;
        while(!pq1.empty()){
            
            int ele = pq1.top();
            pq1.pop();
            
            sum1 += ele;
        }
        
        long long sum2 = 0;
        while(!pq2.empty()){
            
            int ele = pq2.top();
            pq2.pop();
            
            sum2 += ele;
        }
        return sum2 - sum1;
        
    }
};