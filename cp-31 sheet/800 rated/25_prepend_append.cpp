#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;
    cin>>t;

    while(t--){

      int n;
      cin>>n;

      string s;
      cin>>s;

      int n = s.size();
      int i = 0;
      int j = n-1;

      int len = n;

      while(i < j){

        if(s[i] == '0' && s[j] == '1'){
          len = len-2;
          i++;
          j--;
        }
        else if(s[i] == '1' && s[j] == '0'){
          len = len - 2;
          i++;
          j--;
        }

        else break;

      }
      cout<<len <<endl;
    }

    return 0;
}