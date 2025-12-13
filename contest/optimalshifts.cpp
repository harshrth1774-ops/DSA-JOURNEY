#include<iostream>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s = "";
    cin>>s;

    string t = "";
    int countone = 0;
    for(int i = 0; i<n; i++){
      if(s[i] == '1'){
        countone++;
      }
    }
    int ans = -1;
    for(int i = 1; i<=n; i++){
      string t = s.substr(n - i) + s.substr(0, n - i);

      for(int i = 0; i<n; i++){
        if(s[i] == '0' && t[i] == '1'){
          s[i] = t[i];
        }
        if(countone == n){
         ans = i;
         break;
        }
      }
    }
    cout<<ans <<endl;
  }
}