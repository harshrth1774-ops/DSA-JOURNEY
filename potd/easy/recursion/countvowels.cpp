#include<iostream>
using namespace std;
//my approach in which i have passed one extra argument as n
int fun(string s, int i, int count, int n)
{
  if(i==n)                
  return count;

  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
  count++;

  return fun(s,i+1,count,n);
}

//teacher approach in which no need to pass length n as a arguemnt start iteration from back of the string.
int fun2(string s, int i)
{
  if(i==-1)
  return 0;

  //vowel hoga
  if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
  return 1+fun2(s,i-1);
  
  //vowel ni hoga
  else
  return fun2(s,i-1);
}
int main()
{
  //1.
  // string s="amanss";
  // int i=0;
  // int count=0;
  // int n=s.size();
  // cout<<fun(s,i,count,n);

  //2.
  string s="amanss";
  int i=s.size()-1;
  cout<<fun2(s,i);
}