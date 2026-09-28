#include<iostream>
#include<vector>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++){
      cin>>arr[i];
    }

    int zeroes = 0;
    for(int i = 0; i<n; i++){

      if(arr[i] == 0){
        zeroes++;
      }
    }
    
    

    if(arr[0] == 0 && arr[n-1] == 0){
      cout<<0 <<endl;
      continue;
    }

    if(arr[0] == 0 && arr[n-1] == 1 && zeroes >=2){
      cout<<1 <<endl;
      continue;
    }

    if(arr[0] == 1 && arr[n-1] == 0 && zeroes >=2){
      cout<<1 <<endl;
      continue;
    }
    if(arr[0] == 1 && arr[n-1] == 1 && zeroes >=2){
      cout<<2 <<endl;
      continue;
    }

    cout<<-1 <<endl;
  }
}