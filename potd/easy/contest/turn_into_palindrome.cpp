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

      char ch;
      cin>>ch;

      string s;
      cin>>s;

      int i = 0;
      int j = n-1;

      int op = 0;
      while(i <= j){
        
        if(s[i] == s[j]){
          i++;
          j--;
          continue;
        }
        else if(s[i] != s[j]){

          if(s[i] != ch){
            op++;
          }
          if(s[j] != ch){
            op++;
          }
          i++;
          j--;
        }
      }
      cout<<op <<endl;
    }

    return 0;
}