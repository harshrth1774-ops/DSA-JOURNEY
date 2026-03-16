#include <bits/stdc++.h>
using namespace std;

int main(){
    
  map<string,int>directory;

  directory["harsh"] = 90939;
  directory["anmol"] = 90932;
  directory["shlok"] = 90923;
  directory["sahil"] = 90939;

  for(auto element : directory){
    cout<<element.first <<" ";
    cout<<element.second <<" ";
    cout<<endl;
  }
    

    return 0;
}