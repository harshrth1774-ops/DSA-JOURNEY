class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int>ans(n,-1);   //initially sabhi mai -1 daal diya jisse 
        stack<int>st; //ki baad mai bache hue par -1 daalne ka load na rahe
        for(int i=0; i<n; i++){
            if(st.empty()){    //agar stack hai toh compare krne ko kuch
                st.push(i);    //ni hai
            }else{
                while((!st.empty()) && (arr[i] > arr[st.top()])){ 
                    ans[st.top()] = arr[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        return ans;
        
    }
}; //agar stack empty ni hai and array ka agla element bhi chota hai toh uske liye sath sath saerch krna hoga 
//and agar bada hai toh ans ke uss index par jaakar daal denge arr ki value