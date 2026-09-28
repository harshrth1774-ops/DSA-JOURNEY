#include<iostream>
using namespace std;
int linearSearch(int arr[], int target, int idx)
{
  //base case
  if(idx==-1)
  return 0;

  if(arr[idx]==target)
  return 1;
  else
  return linearSearch(arr,target,idx-1);
}
int main()
{
  int arr[]={2,4,7,3,11,8,12};
  int idx=6;
  int target=1;
  cout<<linearSearch(arr,target,idx,7);
}