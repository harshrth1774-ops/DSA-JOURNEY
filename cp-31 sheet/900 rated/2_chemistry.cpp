#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
      
      int n,k;
      cin>>n >>k;

      string s;
      cin>>s;

      map<char,int>mp;
      
      for(auto &ch : s){
        mp[ch]++;
      } 

      int odds = 0;
      for(auto it : mp){

        int freq = it.second;
        if(freq % 2 == 1) odds++;
      }

      if(k < odds-1) cout<<"NO" <<endl;
      else cout<<"YES" <<endl;
      
    }


    return 0;
}