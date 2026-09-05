#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int n,k;
      cin>>n>>k;

      string s;
      cin>>s;


      int i = 0;
      

      while(i < n){
        
        int j = i;
        int cnt = k;
        int idx = INT_MAX;
        unordered_map<char,int>mp;

        while(cnt--){

          if(s[j] == '1'){
            idx = min(idx,j);
          }
          mp[s[j]]++;
          cnt--;
          j++;
        }

        if(mp.size() == 2){
          i += k;
        }else{
          cout<<idx+1 <<endl;
          continue;
        }
      }
    }

    return 0;
}