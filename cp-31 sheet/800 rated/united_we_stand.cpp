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
      for(int i = 0; i<n; i++)
      cin>>arr[i];

      map<int,int>mp;
      for(int i = 0; i<n; i++){
        mp[arr[i]]++;
      }

      if(mp.size() == 1){
        cout<<-1 <<endl;
        continue;
      }
      
      int maxi = *max_element(arr.begin(),arr.end());

      vector<int>b;
      vector<int>c;

      for(int i = 0; i<n; i++){
        if(arr[i] == maxi){
          c.push_back(arr[i]);
        }else{
          b.push_back(arr[i]);
        }
      }

      cout<<b.size() <<" " <<c.size();

      for(int i = 0; i<b.size(); i++){
        cout<<b[i] <<" ";
      }
      cout<<endl;
      for(int i = 0; i<c.size(); i++){
        cout<<c[i] <<" ";
      }
      cout<<endl;
    }

    return 0;
}