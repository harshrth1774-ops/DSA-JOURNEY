#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

      int x,k;
      cin>>x >>k;

    
      //edge case
      if(x < k){
        cout<<1 <<endl;
        cout<<x <<endl;
        continue;
      }

      int move = 0;
      int  i = x;
      vector<int>steps;
      while(i>=0){

        if(i % k == 0){
          i--;
        }else{
          int temp = i;
          x = x - i;
          steps.push_back(i);
          i = i - temp + 1;
          move++;
        }

        if(x == 0){
          break;
        }
      }

      cout<<move <<endl;
      for(int i = 0; i<steps.size(); i++)
      cout<<steps[i] <<" ";

      cout<<endl;
    }
    return 0;
}