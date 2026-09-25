#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int participants;
      cin>>participants;

      vector<int>arr(3,0);
      for(int i = 0; i<3; i++)
      cin>>arr[i];

      int maxi = INT_MIN;
      for(int i = 0; i<3; i++){

        maxi = max(maxi,participants - arr[i]);
      } 
      cout<<maxi <<endl;
      
    }

    return 0;
}