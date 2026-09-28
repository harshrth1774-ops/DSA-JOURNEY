#include <bits/stdc++.h>
using namespace std;

int main(){
    
  long long n;
  cin>>n;

  long long cnt = 0;
  long long sum = 0;
  for(int i = 1; i<=n; i++){

    sum += i;
    if(sum > n) break;

    cnt++;
  }

  cout<<cnt <<endl;



    


    return 0;
}