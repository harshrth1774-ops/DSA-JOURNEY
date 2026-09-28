#include<iostream>
using namespace std;
int gcd(int a, int b)
{
  if(b==0)
  return a;

  return gcd(b,a%b);
}
int main()
{
  int a,b;
  cin>>a>>b;
  cout<<gcd(a,b);

} 
//eucliedian theorem-
// step-1: (a,b)
// step-2: (b,a%b)        suppose a%b ke value hai m1
// step-3: (m1,b%m1);