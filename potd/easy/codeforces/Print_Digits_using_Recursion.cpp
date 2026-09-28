#include <bits/stdc++.h>
using namespace std;

void fun(long long n){

  if(n == 0){
    return;
  }
  
  long long ld = n % 10;
  n /= 10;

  fun(n);
  cout<<ld <<" ";
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t; cin>>t;

    while(t--){

      long long n;
      cin>>n;

      if(n == 0){
        cout<<n <<endl;
        continue;
      }
      fun(n);
      cout<<endl;

    }

    return 0;
}