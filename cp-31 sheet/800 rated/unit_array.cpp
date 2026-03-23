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

      int neg = 0;
      int pos = 0;

      for(int i = 0; i<n; i++){
        if(arr[i] == 1) pos++;
        else neg++;
      }

      int move = 0;
      while(neg > pos || neg % 2 != 0){
        neg--;
        pos++;
        move++;
      }
       
      cout<<move <<endl;
    }
    return 0;
}