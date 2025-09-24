//finding the number of even elements in an array
#include<iostream>
using namespace std;
int fun(int arr[], int idx,int n, int count)
{
  if(idx==n)
  return count;
  if(arr[idx] % 2==0)
  count++;

  fun(arr,idx+1,n,count);
}
int main()
{
  int arr[]={1,2,3,4,5,6};
  int idx=0,n=6;
  int count=0;
  cout<<fun(arr,idx,n,count);
}