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
      arr[0] = 1;

      for(int i = 0; i<n; i++){
        arr[i] = arr[i-1] * 5;
      }

      for(int i = 0; i<n; i++){
        cout<<arr[i] <<" ";
      }
      cout<<endl;
    }

    return 0;
}