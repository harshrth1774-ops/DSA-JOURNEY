#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int n;
      cin>>n;

      vector<int>arr(n);
      for(int i = 0; i<n; i++){
        cin>>arr[i];
      }

      bool gcd_less_than_2 = false;
      for(int i = 0; i<n-1; i++){
      
        for(int j = i+1; j<n; j++){

          if(__gcd(arr[i],arr[j]) <= 2){
            gcd_less_than_2 = true;
            break;
          }
        }
      }

      if(gcd_less_than_2 == false) cout<<"NO" <<endl;
      else cout<<"YES" <<endl;
    }


    return 0;
}