#include<iostream>
#include<vector>
using namespace std;

//NOTE:- for non neg elements recursio-----> infinite <use map>
int fun(vector<int>&arr, int idx, int n, int target)
{
  if(idx == n) return 0;
  if(target == 0) return 1;
  if(target < 0) return 0;
  //agar element use ni kiya then idx ko ++ krdo + //agar elleemnt use kiya then idx ko vahi par rkho 
  return fun(arr,idx+1,n,target) + fun(arr,idx,n,target - arr[idx]);
}
int main()
{
  vector<int>arr = {2,3,4};
  int n = arr.size();
  int idx = 0;
  int target = 6;
  cout<<fun(arr,idx,n,target); 
}