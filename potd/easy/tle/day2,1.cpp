#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x; cin>>x;
  if(x<2){
    cout<<"NO" <<endl;
    return 0;
  }
  
  for(int i=2; i<=x/2; i++){
    if(x % i == 0){
      cout<<"NO"<<endl;
      return 0;
    }
  }
  cout<<"YES"<<endl;
}
//7 ko divide kiya 2 se poora ni kata
//7 ko divide kiya 3 se poora ni kata