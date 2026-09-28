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

      set<int>st;

      for(int i = 0; i<n; i++){
        st.insert(arr[i]);
      }

      if(st.size() == 1){
        cout<<1 <<endl;
        continue;
      }

      bool flag = true;
      for(int i = 1; i<n; i++){
        if(arr[i] < arr[i-1]){
          flag = false;
        }
      }
      if(flag == false){
        cout<<0 <<endl;
        continue;
      }


      vector<int>diff;
      
      for(int i = 1; i<n; i++){
        
        diff.push_back(arr[i]-arr[i-1]);
      }

      int mini = *min_element(diff.begin(),diff.end());

      int secondmini = diff[0];
      for(int i = 0; i<diff.size(); i++){
        
        if(diff[i] < secondmini && diff[i] != mini){
          secondmini = diff[i];
        }
      }

      cout<<abs(mini-secondmini) <<endl;

    }

    return 0;
}