#include <bits/stdc++.h>
using namespace std;

void subsequence(vector<string>& ans,string s, int idx, int n, string temp){

  if(idx == n){
    ans.push_back(temp);
    return;
  }
  //not included
  subsequence(ans,s,idx+1,n,temp);

  //include
  temp.push_back(s[idx]);
  subsequence(ans,s,idx+1,n,temp);
}
int main(){ 
  
  string s = "abc";
  int n = s.size();
  string temp;
  vector<string>ans;
 
  subsequence(ans,s,0,n,temp);
    
  for(int i = 0; i<ans.size(); i++){
    cout<<ans[i] <<endl;
  }

    return 0;
}

