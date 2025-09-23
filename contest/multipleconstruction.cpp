#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int arr[2*n];

    while(n)
    {
      int idx=1;
      if(idx==2*n)
      n--;
      if(idx % n==0){
      arr[idx]=n;
      idx++;
      }
    }
    for(int i=1; i<2*n; i++)
    cout<<arr[i]<<" ";



  }
}