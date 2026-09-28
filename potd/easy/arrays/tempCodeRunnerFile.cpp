#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x,y;
    cin>>x>>y;
    if(x==0 && y==1) cout<<3;
    if(x-1 > y) cout<<-1<<endl;
    else if(x<y) cout<<2<<endl;
    else if(x==y) cout<<-1<<endl;
  }
  return 0;
}