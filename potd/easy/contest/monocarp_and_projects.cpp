#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      long long x, y, k;
      cin>>x>>y>>k;

      long long sum = 0;
      while(k--){

        long long mod = y % x;
        sum += mod;

        x++;
        y++;

      }
      cout<<sum<<endl;
    }

    return 0;
}