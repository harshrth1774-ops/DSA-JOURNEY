#include<iostream>
#include<stack>
using namespace std;
bool check(string s)
{
  stack<char>temp;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i] == '(')
    temp.push(s[i]);
    else{
      if(temp.empty())
      return 0;
      else temp.pop();
    }
  }
  return s.empty();
}
int main()
{
  string s = "((())())";
  cout<<check(s);

}