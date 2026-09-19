#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    string s;
    int x = 0;
    for(int i = 0; i<n; i++){

      for(char &ch : s){

        if(ch == '+'){
          x++;
          break;
        }else{
          x--;
          break;
        }
      }
    }

   
    cout<<x <<endl;



    return 0;
}