#include<iostream>
using namespace std;
//print even number from 1 to n by passing two arguements in the functions
void printEven(int num, int n)
{
  if(num==n)
  {
    cout<<num<<" ";
    return;
  }
  cout<<num<<" ";
  printEven(num+2,n);
}

int main()
{
  int n;
  cin>>n;
  if(n%2==1)
  n--;
  printEven(2,n);

}