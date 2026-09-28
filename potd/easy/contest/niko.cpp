#include<iostream>
using namespace std;
int main()
{
  int t; cin>>t;
   while(t--)
   {
    int n,k; cin>>n>>k;
    string s;
    cin>>s;
    int blocked = 0;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
      if(s[i] == '1')
      {
        blocked = k;
      }else{
        if(blocked > 0) blocked--;
        else ans++;
      }
    }
    cout<<ans <<endl;
   }
}