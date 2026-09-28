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

      vector<int>copy_arr = arr;
      sort(copy_arr.begin(),copy_arr.end());

      if(copy_arr != arr){
        cout<<0 <<endl;
        continue;
      }
      int mini = INT_MAX;
      for(int i = 1; i<n; i++){
        mini = min(mini,arr[i]-arr[i-1]);
      }

      cout<<(mini/2)+1 <<endl;
    }

    return 0;
}