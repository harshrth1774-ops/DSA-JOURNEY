#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    for(int i=0; i<n; i++)
    {
      if(arr[i] < 0){
        arr[i] = 0;
      }else{
        continue;
      }
    }
     for(int i=0; i<n; i++)
  cout<<arr[i]<<" ";
  }
 
}