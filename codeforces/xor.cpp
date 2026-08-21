#include <bits/stdc++.h>
using namespace std;

int main(){

  long long a,b,q;
  cin>>a >>b >>q;

  if(q == 1){
    cout<<a <<endl;
    return 0;
  }
  if(q == 2){
    cout<<b <<endl;
    return 0;
  }
  if(q >= 3){
    long long ans = (q - 1) xor (q - 2);
    cout<<ans <<endl;
    return 0 ;
  }
}