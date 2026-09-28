#include <bits/stdc++.h>
using namespace std;

void fun(long long n){

  if(n == 0){
    return;
  }

  int rem = n % 2;
  fun(n/2);
  cout<< rem; 


}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t; cin>>t;

    while(t--){

      long long n;
      cin>>n;

      if(n == 0 || n == 1){
        cout<<n <<endl;
        continue;
      }

      fun(n);
      cout<<endl;
    }

    return 0;
}