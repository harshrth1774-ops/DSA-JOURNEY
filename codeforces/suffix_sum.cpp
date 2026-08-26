#include <bits/stdc++.h>
using namespace std;

void fun(vector<long long>& arr, int idx, long long &sum, int m){

  if(idx >= arr.size()) return;

  sum += arr[idx];
  fun(arr, idx+1, sum, m);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin>>n >>m;

    vector<long long>arr(n);
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }

    int idx = n - m;
    long long sum = 0;
    fun(arr,idx,sum,m);

    cout <<sum <<endl;
    return 0;
}