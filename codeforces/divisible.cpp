#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

   string n;
   cin>>n;

   long long x;
   cin>>x;

   long long rem = 0;

   for(char ch : n){

    int digit = ch - '0';

    rem = (rem * 10 + digit) % x;

   }
   if(rem == 0) cout<<"YES" <<endl;
   else cout<<"NO" <<endl;

    return 0;
}