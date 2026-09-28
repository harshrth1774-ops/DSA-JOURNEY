#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int ans = 2;
    int i = 0;
    while(i<n)
    {
      if(gcd(ans,arr[i]) == 1){
        cout<<ans <<endl;
        break;
      }else{
        ans++;
        i++;
      }
    }
  }
}