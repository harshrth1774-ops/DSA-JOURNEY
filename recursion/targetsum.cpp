#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>arr, int idx, int n, int target)
{
  if(target == 0) return 1;

  if(idx == n || target < 0) return 0;
  //not include || include
  return check(arr,idx+1,n,target) || check(arr,idx+1,n,target-arr[idx]);
}
int main()
{
  vector<int>arr = {3,4,5};
  int n = arr.size();
  int idx = 0;
  int target = 10;
  cout<<check(arr,idx,n,target) <<" ";
 }