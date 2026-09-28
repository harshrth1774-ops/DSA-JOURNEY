#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin>>t;

    while(t--){

      int a,b,n;
      cin>>a >>b >>n;

      vector<int>arr(n);
      for(int i = 0; i<n; i++){
        cin>>arr[i];
      }

      int i = 0;
      int second = 0;
      while(b != 0){

        if(b == 1 && i < n){

        b = b + arr[i];
        i++;
        if(b >= a){
          b = a;
        }
        b--;
        second++;
      }else{
        b--;
        second++;
      }

      }
      cout<<second <<endl;
    }

    return 0;
}