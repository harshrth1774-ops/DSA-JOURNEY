#include<iostream>
using namespace std;
int product(int arr[], int idx, int n)
{
  if(idx==n-1)
  return arr[idx];

  return arr[idx] * product(arr,idx+1,n);
}
int main()
{
  int arr[]={2,4,6,8,10};
  int n=5;
  int idx=0;
  cout<<product(arr,idx,n);
}