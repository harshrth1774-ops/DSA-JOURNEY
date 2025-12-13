#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    cin>>arr[i];

    int ans = *min_element(arr.begin(),arr.end());
    int i=0;
    while(i<n){
      if(gcd(ans,arr[i]) != 1){
        i++;
      }
    }
    

  }
}