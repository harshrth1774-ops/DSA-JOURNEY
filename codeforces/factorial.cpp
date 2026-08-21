#include <bits/stdc++.h>
using namespace std;

int main(){
  
  long long n;
  cin>>n;

  long long fact = 1;
  for(long long i = n; i>=1; i--){

    fact *= i;
  }
  int ans = int(log10(fact)) + 1;
  cout<<ans <<endl;


}