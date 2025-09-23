#include<iostream>
using namespace std;
int sum(int arr[], int idx, int n)
{
  if(idx==n)
  return 0;
  return arr[idx] + sum(arr,idx+1,n);
}
int sum2(int arr[], int idx, int n)
{
  if(idx==n)
  return 0;

  int sum=0;
  sum2(arr,idx+1,n);
  return sum + arr[idx];
}
int main()
{
  //aage se
  // int arr[]={1,2,3,4,5};
  // int idx=0;
  // int n=5;
  // cout<<sum(arr,idx,n);

  //peeche se
  int arr2[]={2,4,6,8,10};
  int idx=0;
  int n=5;
  cout<<sum2(arr2,idx,n);
}