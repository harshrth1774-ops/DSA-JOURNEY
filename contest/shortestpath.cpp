#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int x,y;
    cin>>x,y;
    if(x<y)
    cout<<"2"<<endl;
    else if(x==1)
    {
      if(y==1)
      cout<<"-1"<<endl;
      else
      cout<<"2"<<endl;
    }
    else if(x==y)
    cout<<"-1"<<endl;
    else{
      cout<<x-y+1<<endl;
    }
  }
}// ni hua