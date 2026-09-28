//https://www.geeksforgeeks.org/problems/smallest-number-on-left3403/1

//code:-
class Solution {
  public:
    vector<int> leftSmaller(vector<int> arr) {
        // code here
        int n = arr.size();
        vector<int>ans(n,-1);
        stack<int>st;
        for(int i=n-1; i>=0; i--){
            if(st.size()==0){
                st.push(i);
            }else{
                while(st.size()>0 && arr[i]<arr[st.top()]){
                    ans[st.top()] = arr[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        return ans;
    }
    //return ans;
};
// 10<--2 <--8 <--3 <--7 <--4
//pehele 4 as it store ho jayega 
//fir jab 7 aayega toh mujhe pta hai 7 jo hai 4 ke baad aata hai it means bada hua toh uske liye sath sath search krunga isliye store kra leta hu
//fir jab 3 aaya toh mujhe dikh gya ki ye toh 7 se chota hai toh mai ans ke uss idx par jaunga and uski st.top par indices jo bhi uss indices par value ko chnage kr dunga