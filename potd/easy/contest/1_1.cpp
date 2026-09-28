#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; cin>>t;

  while(t--){

    int n; cin>>n;

    string s; cin>>s;

    //find max first also chnage the bits
    int maxi = 0;

    for(int i = 0; i<n; i++){
      
      if(s[i] == '1') maxi++;

      else{     // 0 hoga
      
        if(i == 0) continue;
        if(i == n-1) continue;

        else{
          if(s[i-1] == '1' && s[i+1] == '1'){
            s[i] = s[i] ^ 1;
            maxi++; 
          }
        }
      }
    }

    //now original string also changes
    //now find 0
    int mini = 0;
    for(int i = 1; i<n-1; i++){

      if(s[i] == '1' && s[i-1] == '1' && s[i+1] == '1'){
        s[i] = s[i] ^ 1;
      }
    }

    for(int i = 0; i<n; i++){

      if(s[i] == '1'){
        mini++;
      }
    }

    cout<<mini <<" " <<maxi <<"\n";
  }

}