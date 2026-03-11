#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){

      int n; cin>>n;

      vector<int>arr(n);

      for(int i = 0; i<n; i++)
      cin>>arr[i];

      if(n == 2){
        cout<<"YES" <<endl;
        continue;
      }
      if(n == 3 && arr[0] != arr[1] && arr[0] != arr[2] && arr[1] != arr[2]){
        cout<<"NO" <<endl;
        continue;
      }
      

      bool allsame = true;
      for(int i = 0; i<n-1; i++){
        
        if(arr[i] != arr[i+1]){
          allsame = false;
          break;
        }
      }

      if(allsame == true){
        cout<<"YES" <<endl;
        continue;
      }

      cout<<"NO" <<endl;
    }
}