#include<iostream>
using namespace std;

string fun(string s)
{
  string ans="";      //maine pehele empty string leli
  for(char &ch : s)   //string mai iterate krta hu
  {
    if(ans.size() > 0 && (ans.back()-32==ch || ans.back()+32==ch))
    {
      ans.pop_back();      
    }else{
      ans.push_back(ch);
    }
  
  }
  return ans;
}
int main()
{
  string s="leEeetcode";
  cout<<fun(s);

}