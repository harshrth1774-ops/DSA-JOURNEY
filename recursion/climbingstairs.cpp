#include<iostream>
using namespace std;
int climbingStairs(int n)
{
  if(n<=1)
  return 1;
}
int main()
{
  int n=5;
  cout<<climbingStairs(n);

  //iterative approach
  if(n==0 || n==1)
  return 1;

  int first=1,second=2,sum=0;
  for(int i=3; i<=n; i++)
  {
    int sum= first + second;
    first=second;
    second=sum;
  }
  return sum;

}