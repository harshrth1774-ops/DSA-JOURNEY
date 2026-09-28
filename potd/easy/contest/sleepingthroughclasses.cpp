#include<iostream>
#include<string>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    int i = 0;
    int count = 0;
    while(i < n)
    {
      if(s[i] == '1')
      {
        i += k + 1;
      }
      else
      {
        count++;
        i++;
      }
    }
     cout << count << '\n';
  }
}