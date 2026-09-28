#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int items[n];
    for(int i=0; i<n; i++)
    cin>>items[i];
    int discount[k];
    for(int i=0; i<k; i++)
    cin>>discount[i];

    //mai sabse pehele item mai minimumm vaala find kr leta hu
    int mn = *min_element(items, items + n);
    

  }
}
