#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin>>t;

    while(t--){

      int x0,y0,r;
      cin>>x0 >>y0 >>r;

      for(int a = 0; a <= r; a++){

        int b2 = r * r - a * a;
        int b = sqrt(b2);

        if(b * b == b2){

          int x = x0 + a;
          int y = y0 + b;
          cout <<x <<" " <<y <<endl;
          break;
        }
      }
    }

    return 0;
}