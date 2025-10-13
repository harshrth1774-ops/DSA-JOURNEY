#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
  vector<int>arr={100,80,55,70,60,75,80};
  int n = arr.size();
  vector<int>ans(n,1);
  stack<int>st;
  for(int i=n-1; i>=0; i--)
  {
    //basically finding next greater element
    while(st.size()>0 && arr[i] > arr[st.top()])  //st.size()=!st.empty()
    {
      ans[st.top()] = st.top() - i;//jaha mereko NGE mila mai st.top par rkha idx ko i se minus krke ans ke stack ke top idx par rkhe idx par storre kra dunga
      st.pop();
    }
    st.push(i);
  }
  //ye bhi possible hai ki mereko kisi element ke ke liye uska next greaterest mile hi ni toh fir mai kya krunga ki stakc ke top idx ko clean krna start krunga and ans ke uss idx par ussi idx mai +1 krke store kra dunga
  while(st.size()>0)
  {
    ans[st.top()] = st.top()+1;
    st.pop();
  }
  for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
}
