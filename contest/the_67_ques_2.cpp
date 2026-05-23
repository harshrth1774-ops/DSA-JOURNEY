#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int n = 7;
      vector<int>arr(n);
      
      for(int i = 0; i<n; i++){
        cin>>arr[i];
      }

      sort(arr.begin(),arr.end());

      int sum = 0;
      for(int i = 0; i<n-1; i++){
        sum += arr[i];
      }
      int ans = -1 * sum;
      cout<<ans + arr[n-1] <<endl;
    }

    return 0;
}