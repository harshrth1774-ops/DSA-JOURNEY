#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int n,x;
      cin>>n >>x;

      vector<int>arr(n);

      for(int i = 0;i<n; i++)
      cin>>arr[i];

      long long sum = 0;
      
      for(int i = 0; i<n; i++){

        int ans = gcd(arr[i], x);
        
        if(ans != 1){
          sum += ans;
        }
      }
      cout<< sum <<endl;
    }

    return 0;
}