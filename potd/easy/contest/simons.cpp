#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t; cin>>t;

  while(t--)
  {
    int n; cin>>n;
    vector<int>arr(n);

    for(int i = 0; i<n; i++){
      cin>>arr[i];
    }

    //find the max
    int maxi = arr[0];
    int idx = -1;

    for(int i = 0; i<n; i++){
      if(arr[i] > maxi){
        maxi = arr[i];
        idx = i;
      }
    }
    swap(arr[0],arr[idx]);
    
    for(int i = 0; i<n; i++){
      cout<<arr[i] <<" ";
    }
    cout<<endl;
  }
}