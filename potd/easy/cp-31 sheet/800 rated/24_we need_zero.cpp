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
      for(int  i = 0; i<n; i++){
        cin>>arr[i];
      }

      int total = 0;
      for(int i = 0; i<n; i++){
        total ^= arr[i];
      }

      if(n % 2 == 1){
        cout<<total <<endl;
      }else{

        if(total == 0){
          cout<<total <<endl;
        }else{
          cout<<-1 <<endl;
        }
      }
    }

    return 0;
}