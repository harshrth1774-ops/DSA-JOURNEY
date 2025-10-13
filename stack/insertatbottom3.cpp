//1.given stack ki values ko ek dusre stack mai daal do 
//2.x ko given stack mai daal do
//3.wapas uss stack se value utha kr given stack mai daal do
// User function Template for C++
#include<iostream>
#include<stack>
using namespace std;
class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        stack<int>tostore;
        while(st.size()!=0)
        {
            tostore.push(st.top());
            st.pop();
        }
        st.push(x);
        while(tostore.size()!=0)
        {
            st.push(tostore.top());
            tostore.pop();
        }
        return st;
    }
};