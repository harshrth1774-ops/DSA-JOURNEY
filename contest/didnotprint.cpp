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

      string s;
      cin>>s;

      stack<char>st;
      vector<int>printed;

      for(int i = 0; i<n; i++){

        if(s[i] == '1'){
          st.push(i+1);
        }

        else if(s[i] == '2'){

          if(st.empty()){

            printed.push_back(i+1);
          }else{
            
            printed.push_back(st.top());
            st.pop();
          }
        }
        else{
          printed.push_back(i+1);
        }
      }

      vector<int>notprinted;
      for(int i = 1; i<=n; i++){

        bool present = false;
        for(int j = 0; j<printed.size(); j++){

          if(i == printed[j]){
            present == true;
            break;
          }
        }
        if(present == false){
          notprinted.push_back(i);
        }
      }
      cout<<notprinted.size() <<endl;
      for(int x : notprinted){
        cout<<x <<" ";
      }
      cout<<endl;

    }

    return 0;
}