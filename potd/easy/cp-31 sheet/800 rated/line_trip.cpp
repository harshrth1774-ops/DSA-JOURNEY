#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;

  while(t--){
    int n,x;
    cin>>n >>x;

    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    arr.insert(arr.begin(),0);
    arr.push_back(x);

    int ans = 0;
    int size = arr.size();
    for(int i = 0; i<size-1; i++){
      ans = max(ans,arr[i+1]-arr[i]);
    }

    if(ans > 2 *(abs(arr[size-2] - arr[size-1]))){
      cout<<ans <<endl;
      continue;
    }
    int diff = 2 * (abs(arr[size-2] - arr[size-1]));
    cout<<diff <<endl;

  }
}