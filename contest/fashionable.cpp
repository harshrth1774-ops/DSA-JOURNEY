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

      for(int i = 0; i<n; i++)
      cin>>arr[i];

      map<int,int>mp;

      for(int x : arr){
        mp[x]++;
      }
      for(auto it  = mp.rbegin(); it != mp.rend(); it++){

        cout<<it->first <<" ";
        it->second--;
      }

       for(auto it  = mp.rbegin(); it != mp.rend(); it++){
        
        if(it->second > 0){
          cout<<it->first <<" ";
          it->second--;
        }
      }
      cout<<endl;

    }

    return 0;
}