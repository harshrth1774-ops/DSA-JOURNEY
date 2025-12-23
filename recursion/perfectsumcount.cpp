#include<iostream>
#include<vector>
using namespace std;
//------------------------------------------------------> logic only for positive number 
// int fun(vector<int> &arr, int idx, int n, int target)
// {
//   if(target == 0){
//     return 1;
//   }
//   if(idx == n || target < 0){
//     return 0;
//   }

//   //left part + right part
//   return fun(arr,idx+1,n,target) + fun(arr, idx+1, n, target - arr[idx]);
// }

//---------------------------------------------------> logic if non negatuive number are included
int fun(vector<int> &arr, int idx, int n, int target)
{
  if(idx == n){

    if(target == 0) return 1;
    else return 0;
  }

  //left part + right part

  return fun(arr,idx+1, n, target) + fun(arr,idx+1, n, target - arr[idx]);
}
int main()
{
  vector<int>arr = {2,5,6,1};
  int n = arr.size();
  int idx = 0;
  int target = 8;

  cout<<fun(arr,idx,n,target);
}
