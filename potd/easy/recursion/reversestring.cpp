#include<iostream>
using namespace std;
void fun(string &s, int i, int j)
{
  //base case
  if(i>=j)
  return;
  //swapping
  char ch=s[i];
  s[i]=s[j];
  s[j]=ch;

  fun(s,i+1,j-1);
}
int main()
{
  string s="harsh";
  int i=0,j=s.size()-1;
  fun(s,i,j);
  cout<<s;

}