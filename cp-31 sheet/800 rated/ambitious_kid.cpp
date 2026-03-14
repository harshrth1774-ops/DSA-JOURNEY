#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin>>t;

    while(t--){
      
      int n;
      cin>>n;

      vector<int>arr(n);
      for(int i = 0; i<n; i++)
      cin>>arr[i];

      bool istherezero = false;
      for(int i = 0; i<n; i++){
        if(arr[i] == 0){
          istherezero = true;
        }
      }
      if(istherezero == true){
        cout<<0 <<endl;
        continue;
      }

      //make all neg to pos
      for(int i = 0; i<n; i++){
        if(arr[i] < 0){
          arr[i] = -1 * arr[i];
        }
      }

      sort(arr.begin(),arr.end());
      cout<<arr[0] <<endl;
      

    }

    return 0;
}