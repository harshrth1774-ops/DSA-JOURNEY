#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i=0; i<n; i++)
  cin>> a[i];

  vector<int>b(n);
  for(int i=0; i<n; i++)
  cin>> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if(a == b) cout<<"yes" <<endl;
  else cout<<"no"<<endl;



}