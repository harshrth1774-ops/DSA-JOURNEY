#include<iostream>
using namespace std;
int maxElement(int arr[], int idx, int n)
{
  if(idx==n-1)
  return arr[idx];

  return max(arr[idx],maxElement(arr,idx+1,n));
}
int main()
{
  int arr[]={2,4,10,3,5};
  int idx=0;
  int n=5;
  cout<<maxElement(arr,idx,n);
}

fun(arr,i,max){

  if(i > arr.size()) return;

  if(arr[i] > max){
    max = arr[i];
  }
  fun(arr,i+1,max);
}