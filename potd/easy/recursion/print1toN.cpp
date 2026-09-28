#include<iostream>
using namespace std;

//printing numbers from 1 to n by passing two arguements in the function
void print(int num,int n)
{
  if(num==n)
  {
    cout<<num<<endl;
    return;
  }
  cout<<num<<endl;
  print(num+1,n);
}

//printing number from 1 to n by passing 1 argument
void fun(int N)
{
  if(N==1){
  cout<<1<<endl;
  return;
  }

  fun(N-1);
  cout<<N<<endl;
}
int main()
{
  
  // int n;
  // cout<<"enter the value of n: ";
  // cin>>n;
  // print(1,n);
  
  int N=5;
  fun(N);
  
}