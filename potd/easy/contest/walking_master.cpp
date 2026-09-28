#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int a,b,c,d;
      cin>>a >>b >>c >>d;

      if(a == c && b == d){
        cout<<0 <<endl;
        continue;
      }
      
      int op = 0;
     
      if(a != c){

        while(a < c){
          a++;
          b++;
          op++;
        }

        while(a > c){
          a--;
          op++;
        }
      }

      if(b != d){

        while(b < d){
          while(b < d){
            b++;
            a++;
            op++;
          }
        }

        if(b > d) cout<<-1 <<endl;
      }
    }

    return 0;
}