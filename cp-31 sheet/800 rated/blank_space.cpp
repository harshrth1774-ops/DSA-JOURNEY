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

      int ans = 0;
      int i = 0;
      while(i < n){

        if(arr[i] == 1){
          i++;
        }else{
          int start = i;
          
          while( start < n && arr[start] != 1){
            start++;
          }
          ans = max(ans,start-i);
          i = start;
        }
      }
      cout<<ans <<endl;
    }

    return 0;
}