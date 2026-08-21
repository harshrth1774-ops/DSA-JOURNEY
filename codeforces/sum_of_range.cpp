#include <bits/stdc++.h>
using namespace std;

int main(){

  long long a,b;
  cin>>a >>b;

  if(a > b){
    swap(a,b);
  }
  long long sum = 0,evensum = 0,oddsum = 0;

  for(long long i = a; i<=b; i++){

    sum += i;

    if(i % 2 == 0){
      evensum += i;
    }

    if(i % 2 != 0){
      oddsum += i;
    }
  }
  cout<<sum <<endl;
  cout<<evensum <<endl;
  cout<<oddsum <<endl;

    return 0;
}