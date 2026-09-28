#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>arr = {2,3,4,2,6,5,4,3};
  int n = arr.size();
  vector<int>right(n);
  stack<int>st;
  for(int i=0; i<n; i++)
  {
    while(!st.empty() && arr[i] < arr[st.top()])
    {
      right[st.top()] = i;
      st.pop();
    }
    st.push(i);
  }
  //jo bache hai baha par n daal do means uska size
  while(st.size()>0)
  {
    right[st.top()] = n;
    st.pop();
  }
  //now filling the nsl (next smallest left)
  vector<int>left(n);
  for(int i=n-1; i>=0; i++)
  {
    while(!st.empty() && arr[i] < arr[st.top()])
    {
      left[st.top()] = i;
      st.pop();
    }
    st.push(i);
  }
  //jo bache hai baha -1 daal do
  while(st.size()>0)
  {
    left[st.top()] = -1;
    st.pop();
  }
  int area = 0;
  for(int i=0; i<n; i++){
  area = max(area, arr[i]*(right[i]-left[i]-1));
  }
}
//step 1:- just find the next smallest element index for each element on the right side;

//step 2:- just find the next smallest element index for each element on the left side; start from last element

//step:-3 initilaise area=0 and return the greatest area = max(arr[i] * (right[i]) - left[i]-1)
