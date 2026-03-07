#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t; cin>>t;

  while(t--){
    int n,x;
    cin>>n >>x;

    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    int cap = 0;
    for(int c = 1; c<=n; c++){
      cap = c;
      
      int i = 0, j = i+1;
      while(i<n-1 && j<n){
      cap = cap + arr[j] - arr[i];

      if(cap < 0) break;
      
      }
    }
  }
}