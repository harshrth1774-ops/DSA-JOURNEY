#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin>>t;

  while(t--){

    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0; i<n; i++)
    cin>>arr[i];

    //already sorted
    vector<int>copyarr = arr;

    sort(begin(copyarr),end(copyarr));

    if(copyarr == arr){
      cout<<"YES" <<endl;
      continue;
    }

    int maxi = arr[0];
    int pos = 0;
    for(int i = 1; i<n; i++){
      if(arr[i] > maxi){
        maxi = arr[i];
        pos = i;
      }
    }
    if(pos == 0 || pos == n-1){
      cout<<"NO" <<endl;
    }else{
      cout<<"YES" <<endl;
    }
  }
}