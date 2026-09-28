#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t;cin>>t;

  while(t--){
    int n; cin>>n;
    int k; cin>>k;

    vector<int>arr(n);
    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }

    //checking sorted array condition
    bool flag = true;
    for(int i = 0; i<n-1; i++){

      if(arr[i] > arr[i+1]){
        flag = false;
        break;
      }
    }

    if(flag == true){
      cout<<"YES" <<endl;
      continue;
    }

    if(flag == false && k == 1){
      cout<<"NO" <<endl;
      continue;
    }

    if(flag == false && k > 1){
      cout<<"YES" <<endl;
      continue;
    }
  }
}