#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin>>t;
    while(t--){

      int n,k;
      cin>>n >>k;

      vector<int>arr(n);
      for(int i = 0; i<n; i++)
      cin>>arr[i];

      bool flag = false;
      for(int i = 0; i<n; i++){

        if(arr[i] == k){
          flag = true;
        }
      }

      if(flag == true) cout<<"YES" <<endl;
      if(flag == false) cout<<"NO" <<endl;
    }

    return 0;
}