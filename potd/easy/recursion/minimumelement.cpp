#include<iostream>
using namespace std;
int minElement(int arr[], int idx, int n)
{
  if(idx==n-1)
  return arr[idx];

  return min(arr[idx],minElement(arr,idx+1,n));
}
int main()
{
  int arr[]={7,2,4,1,6};
  int idx=0;
  int n=5;
  cout<<minElement(arr,idx,n);
}