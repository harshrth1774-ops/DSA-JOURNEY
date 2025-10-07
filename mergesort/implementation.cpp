#include<iostream>
#include<vector>
using namespace std;
//merge kaise kre
void merge(int arr[], int start, int mid, int end)
{
  vector<int>temp(end-start+1); //temp vector to store values
  int left=start,right=mid+1,idx=0;
  while(left<=mid && right<=end)
  {
    //jiska array ka element chota hoga uska hi pointer aage bdega
    if(arr[left]<arr[right])
    {
      temp[idx]=arr[left];
      left++,idx++;
    }else{       //arr[right]<arr[left]
      temp[idx]=arr[right];
      right++,idx++;
    }
  }
  //agar left part mai agar aelement bache hai
  while(left<=mid)
  {
    temp[idx]=arr[left];
    left++,idx++;
  }
  //agar right part mai elements bache 
  while(right<=end){
    temp[right]=arr[right];
    right++,idx++;
  }
  //ab mai value temp se arr mai daalta hu
  idx=0;
  while(start<=end)
  {
    arr[start]=temp[idx];
    idx++,start++;
  }
}
int main()
{
  int arr[]={  };
}