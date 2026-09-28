#include<iostream>
#include<vector>
using namespace std;

// //---------------------------------------------->my code TC:- O(2^n) S.C:-O(2^n)
// void fun(vector<int>arr,int idx,vector<int>&ans,int sum, int n){

//   if(idx == n){
//     ans.push_back(sum);
//     return;
//   }
//   //not incluide
//   fun(arr,idx+1,ans,sum,n);
//   //include
//   sum += arr[idx];
//   fun(arr,idx+1,ans,sum,n);
// }
// int main()
// {
//   vector<int>arr = {3,4,5};
//   int n = arr.size();
//   int idx = 0;
//   vector<int>ans;
//   int sum = 0;

//   fun(arr,idx,ans,sum,n);

//   for(int i = 0; i<ans.size(); i++)
//   cout<<ans[i] <<" ";
// }

//----------------------------------------------------->sir ki approach:- TC:-O(2^N) SC:- O(n)  
void fun(vector<int>arr, int idx, int n, int sum){

  if(idx == n){
    cout<<sum <<endl;
    return;
  }
  //not include
  fun(arr, idx+1, n, sum);
  //include
  fun(arr, idx+1, n, sum + arr[idx]);
}
int main()w
{
  vector<int>arr = {3,4,5};
  int n = arr.size();
  int idx = 0;
  int sum = 0;
  fun(arr,idx,n,sum);

}

