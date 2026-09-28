#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;

    while(t--){

      int n; cin>>n;

      vector<int>arr(n);

      for(int i = 0; i<n; i++){
        cin>>arr[i];
      }

      map<int,int, greater<int>>mp;
      for(int x : arr)
      mp[x]++;

      vector<int>res;
      res.reserve(n);
      while(!mp.empty()){

        for(auto &[val ,freq] : mp){
          res.push_back(val);
          freq--;
        }

        for(auto it = mp.begin(); it != mp.end();){

          if(it->second == 0){
           it =  mp.erase(it);
          }else{
            it++;
          }
        }
      }

      for(int x : res){
        cout<<x <<" ";
      }
      cout<<endl;



      


    }

    return 0;
}