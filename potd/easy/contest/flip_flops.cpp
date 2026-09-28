#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int n,c,k;
      cin>> n >>c >>k;

      vector<long long>arr(n);
      for(int i = 0; i<n; i++){
        cin>>arr[i];
      }

     if(n == 1){

      if(k > c){
        cout<<c <<endl;
        continue;
      }else{
        cout<<k + c + arr[0] - 1 <<endl;
        continue;;
      }
     }

     long long sum = 0;
     if(c > k){

      for(int i = 0; i<n; i++){

        if(arr[i] < c + k && arr[i] != c && arr[i] != k){
          sum += arr[i];
        }
      }
      cout<<sum + c <<endl;
      continue;
     }else{

      for(int i = 0; i<n; i++){
        if(arr[i] < c + k && arr[i] != c && arr[i] != k){
          sum += arr[i];
        }
      }
      cout<<sum + c + k <<endl;
      continue;
     }

    }

    return 0;
}