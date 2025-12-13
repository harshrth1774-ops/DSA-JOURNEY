#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n;
    cin>>arr[i];
    for(int i = 0; i<n; i++)
    cin>>arr[i];

    vector<int>check(n,false);
    int count = 0;
    for(int i = 0; i<n; i++){
      if(arr[i] == true) continue;
      for(int j = i+1; j<n; j++){

        if(arr[i] > arr[j] && arr[j] != true){
          count++;

          check[j] = true;
        }
      }
    }
  }
}