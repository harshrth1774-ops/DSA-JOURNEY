#include<iostream>
using namespace std;
int power(int num, int n)
{
  if(n==1)
  return num;
  
  return num * power(num,n-1);
}
int main()
{
  int n=5;
  int num=5;
  cout<<power(num,n);

}