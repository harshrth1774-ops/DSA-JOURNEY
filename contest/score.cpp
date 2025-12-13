#include<iostream>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n; cin>>n;
    int a[n];
    int b[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];
    int mx1 = 0;
    int mx2 = 0;
    //int score = 0;
    for(int i=0; i<n; i++)
    {
      int r_max  = mx1-a[i];
      int r_min  =   - a[i];
      int b_max = b[i] - prev_max;
      int b_min = b[i] - prev_min;

      int new_max1 = max(mx1-a[i],mx2 + b[i]);
      int new_max2 = max(mx2 + a[i],mx1 - b[i]);

      mx1 = new_max1
      mx2 = new_max2;

    }
    cout<<prev_max <<endl;
  }
}