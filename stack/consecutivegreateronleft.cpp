#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int main()
{
  vector<int>arr={2,1,5,6};
  int n = arr.size();
  vector<int>ans(n,1);
  stack<int>st;
  for(int i=0; i<n; i++)
  {
    while(st.size()>0 && arr[i] > arr[st.top()])
    {
      ans[st.top()] = i-st.top();
      st.pop();
    }
    st.push(i);
  }
  
}