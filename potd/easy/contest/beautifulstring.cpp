#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;

    vector<int>ans;
    for(int i=0; i<n; i++)
    {
      if(s[i] == '0')
      {
        ans.push_back(i);
      }
    }
    cout<<ans.size() <<endl;
    for(int i=0; i<ans.size(); i++)
    cout<<ans[i] + 1 <<" ";
  }
}