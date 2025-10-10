#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main()
{
  //SOLUTION USING EXTRA ARRAY------>
  //given vector suppose 6 10 7 4 8 9 4
  vector<int>arr={6,10,7,4,8,9,4};
  int n= arr.size();
  vector<int>temp = arr; //copies the value of arr in temp
  stack<int>st;
  vector<int>ans(n,-1);
  int i=0;
  while(i<n){
    temp.push_back(arr[i]);   //temp is now double of arr
    i++;
  }
  for(int i=0; i<2*n; i++){
    while(st.size()>0 && temp[i]>arr[st.top()]){
      ans[st.top()]=temp[i];
      st.pop();
    }
    if(i<n){
      st.push(i);   //MERA I KI RANGE MAI REHNA CHHAIYE
    }
  }

}