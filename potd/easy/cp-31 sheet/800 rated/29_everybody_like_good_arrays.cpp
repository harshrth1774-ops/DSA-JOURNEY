#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      vector<long long>arr(n);
      for(int i = 0; i<n; i++){
        cin>>arr[i];
      }

      int op = 0;
      //vector<long long>arr(n);
      for(int i = 0; i<n-1; i++){

        if((arr[i] % 2) == (arr[i+1] % 2)){
          op++;
        }
      }
      cout<<op<<endl;
    }

    return 0;
}