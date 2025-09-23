/*You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.*/

#include<iostream>
using namespace std;
int main()
{
  string s="book";               //ye string di hui hai
  int n=s.size();

  string a="";                         
  for(int i=0; i<n/2; i++)          
  a+=s[i];                           //storing half part of the string

  string b="";
  for(int i=n/2; i<s.size(); i++)
  b+=s[i];                          //storing another half

  int counta=0;                      //this will store count of vowels in string a
  for(char &ch : a)
  {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    counta++;
  }

  int countb=0;                     //this will store count of vowels in string b
  for(char &ch : b)
  {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    countb++;
  }
  if(counta==countb)
  return 1;

  return 0;
  

}