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
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    //1st largest number
    int m1=arr[0];
    for(int i=0; i<n; i++)
    {
      if(arr[i]>m1)
      m1=arr[i];
    }
    // second largest number
    int m2=arr[0];
    for(int i=0; i<n; i++)
    {
      if(arr[i]>m2 && m2!=m1)
      m2=arr[i];
    }
    cout<<m2-m1<<endl;
  }
  return 0;
}