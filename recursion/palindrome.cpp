#include<iostream>
using namespace std;
bool checkPalindrome(string s, int start, int end)
{
  if(start>=end)   //recursive case jab start aage aa gya end ke then it mean string mai 
  return 1;       //traverse ho chuka and paldindrom ban chuki hai 

  if(s[start]!=s[end])  
  return 0;

  return checkPalindrome(s,start+1,end-1);
}
int main()
{
  string s="naman";
  int start=0,end=s.size()-1;
  cout<<checkPalindrome(s,start,end);
}