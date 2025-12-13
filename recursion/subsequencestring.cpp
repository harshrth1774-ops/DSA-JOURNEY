#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sequence(string s, int idx, int size, string &temp, vector<string>&ans)
{
  //base case
  if(idx == size){
    ans.push_back(temp);
    return;
  }
  //not included
  sequence(s, idx+1, size, temp,ans);
  //included
  temp.push_back(s[idx]);
  sequence(s,idx+1,size,temp,ans);
  temp.pop_back(); 
  
}
int main()
{
  string s = "abcd";
  string temp;
  vector<string>ans;
  sequence(s,0, s.size(), temp, ans);
  for(int i=0; i<ans.size(); i++)
  cout<<ans[i] <<endl;
}