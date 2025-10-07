#include<iostream>
using namespace std;
int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    int n; cin>>n;
    //for n=3--->[2 1 3 1 2 3]
    //putting from backward
    for(int i=1; i<=n-1; i++)
    cout<<n-i<<" ";
    
    cout<<n<<" ";

    for(int i=1; i<=n; i++)
    cout<<i<<" ";

    cout<<endl;
  }
  return 0;
}