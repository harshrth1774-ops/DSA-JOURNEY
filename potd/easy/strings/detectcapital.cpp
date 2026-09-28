#include<iostream>
using namespace std;
bool detectCapital(string s)
{
  int count=0;          //ye string mai kitne captial letters hai count krke dega
  for(char &ch : s)
  {
    if(isupper(ch))
    count++;
  }
  if(count==0)
  return true;
  if(count==1 && isupper(s[0]))
  return true;
  if(count==s.size())
  return true;
    
}
int main()
{
  string s="USA";
  //more examples of s are : s="leetcode" s="Leetcode"
  cout<<detectCapital(s);
}