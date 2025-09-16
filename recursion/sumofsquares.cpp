#include<iostream>
using namespace std;
int sos(int n)
{
  if(n==1)
  return 1;

  return (n*n) + sos(n-1);
}
int main()
{
  int n=5;
  cout<<sos(n);

}
