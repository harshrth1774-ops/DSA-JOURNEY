#include <bits/stdc++.h>
using namespace std;

int main(){

  long long n;
  cin>>n;

  long long sum = n + 1;

  for(long long i = 2; i<= sqrt(n); i++){

    if(n % i == 0){
      sum += i;

      if(i != n/i){
        sum += n/i;
      }
    }
  }
  cout<<sum <<endl;
}