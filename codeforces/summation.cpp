#include <bits/stdc++.h>
using namespace std;

void fun(vector<int>& arr, int idx, long long &sum){

  if(idx >= arr.size()) return;

  sum += arr[idx];
  fun(arr, idx+1, sum);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }

    long long sum = 0;
    fun(arr,0,sum);
    cout<<sum <<endl;

    return 0;
}