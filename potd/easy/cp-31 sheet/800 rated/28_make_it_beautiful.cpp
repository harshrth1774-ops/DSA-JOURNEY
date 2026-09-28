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

      map<int,int>mp;
      for(int i = 0; i<n; i++){
        mp[arr[i]]++;
      }

      if(mp.size() == 1){
        cout<<"NO" <<endl;
        continue;
      }

      cout<<"YES" <<endl;
      cout<<arr[n-1] <<" ";
      for(int i = 0; i<n-1; i++){
        cout<<arr[i] <<" ";
      }
      cout<<endl;
    }

    return 0;
}