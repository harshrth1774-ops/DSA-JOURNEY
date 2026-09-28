#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>& arr, int idx, int &maxi){

  if(idx >= arr.size()){
    return;
  }

  if(arr[idx] > maxi){
    maxi = arr[idx];
  }
  fun(arr, idx+1, maxi);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    vector<int>arr(n);

    
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }

    if(n == 1){
      cout<<arr[0] <<endl;
    }
    int maxi = INT_MIN;
    fun(arr,0,maxi);
    cout<<maxi <<endl;

    return 0;
}