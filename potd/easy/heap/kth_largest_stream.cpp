class Solution {
  public:
   // n^2logn
    vector<int> kthLargest(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
       // int k2 = k;
        vector<int>ans(n);
        
        for(int i = 0; i<n; i++){
            
            vector<int>temp;
            
            for(int j = 0; j<=i; j++){
                
                temp.push_back(arr[j]);
            }
            if(temp.size() < k){
                ans[i] = -1;
            }else{
                
                sort(temp.begin(),temp.end());
                int k2 = k;
                k2--;
                while(k2){
                    temp.pop_back();
                    k2--;
                }
                ans[i] = temp[temp.size()-1];
                
            }
        }
        return ans;
    }
};

//APPROACH - 2:
