#include<iostream>
using namespace std;
int fibo(int n)
{
  //base case                             //if(n<=1)
  if(n==0)                                //return n
  return 0;
  if(n==1)
  return 1;

  return fibo(n-1) + fibo(n-2);
}
int main()
{
  int n=5;
  cout<<fibo(n);
}