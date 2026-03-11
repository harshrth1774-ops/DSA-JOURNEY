#include <bits/stdc++.h>
using namespace std;

bool check(string s, string x){

  if(x.size() < s.size()) return false;

  for(int i = 0; i<x.size()-s.size()+1; i++){

    if(x.substr(i,s.size()) == s){
      return true;
    }
  }
  return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
      
      int n,m;
      cin>>n >>m;

      string x;
      cin>>x;

      string s;
      cin>>s;

      string x0 = x;
      string x1 = x0 + x0;
      string x2 = x1 + x1;
      string x3 = x2 + x2;
      string x4 = x3 + x3;
      string x5 = x4 + x4;

      int op = -1;

     if(check(s,x0)){
      op = 0;
     }
      else if(check(s,x1)){
        op = 1;
      }
      else if(check(s,x2)){
        op = 2;
      }
     else if(check(s,x3)){
        op = 3;
      }
     else if(check(s,x4)){
        op = 4;
      }
    else if(check(s,x5)){
        op = 5;
      }

      cout<<op <<endl;
    }
    return 0;
}