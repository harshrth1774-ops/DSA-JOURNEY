#include<iostream>
using namespace std;
void fun(string &s, int i)
{
  //base case
  if(i==-1)
  return;
  
  s[i]=s[i]-32;
  fun(s,i-1);
}
int main()
{
  string s="harsh";
  int i=s.size()-1;
  fun(s,i);
  cout<<s;
}