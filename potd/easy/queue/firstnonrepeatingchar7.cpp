#include<iostream>
#include<queue>
#include<vector>
using namespace std;
int main()
{
  string s ="ababdc";
  int n = s.size();
  queue<char>q;
  vector<int>ans;
  
  for(int i = 0; i<n; i++){
    if(q.empty()){
      q.push(s[i]);
      ans.push_back(q.front());
    }else{
      if(q.front() != s[i]){
        ans.push_back(q.front());
        q.push(s[i]);
      }else{
        q.pop();
        q.push(s[i]);
      }
    }
  }
  
}