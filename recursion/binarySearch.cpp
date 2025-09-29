#include<iostream>
using namespace std;
int fun(int arr[], int start, int end, int X)
{
  if(start>end)
  return -1;

  int mid=(start+end)/2;
  if(arr[mid]==X)
  return 1;

  else if(arr[mid]<X)
  return fun(arr,mid+1,end,X);
  else
  return fun(arr,mid-1,end,X);
}
int main()
{
  int arr[]={3,8,11,15,20,22};
  int start=0,end=5;
  int x=22;
  cout<<fun(arr,start,end,x);
}