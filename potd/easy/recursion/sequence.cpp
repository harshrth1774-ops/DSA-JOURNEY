#include<iostream>
#include<vector>
using namespace std;
// void subseq(vector<int>arr,vector<int>temp, vector<vector<int>>&ans,int idx, int n){

//   if(idx == n) {
//     ans.push_back(temp);
//     return;
//   }
//   //ni lena hai
//   subseq(arr,temp,ans,idx+1,n);
  
//   //lena hai 
//   temp.push_back(arr[idx]);
//   subseq(arr,temp,ans,idx+1,n);

  
// }
// int main()
// {
//   vector<int>arr = {1,2,3};
//   int n = arr.size();
//   int idx = 0;
//   vector<vector<int> >ans;
//   vector<int>temp;
//   subseq(arr,temp,ans,idx,n);

//   for(int i = 0; i<ans.size();i++){
//     for(int j =0; j<ans[i].size(); j++){
//       cout<<ans[i][j] <<" ";
//     }
//     cout<<endl;
//   }
// }


// //TC:-  2^N
// //-------------------------------------------------------------------------->string case
void subset(string &s,int idx, int n,string temp,vector<string> &ans){

  if(idx == n){
    ans.push_back(temp);
    return;
  }
  //ni lena hai
  subset(s,idx+1,n,temp,ans);
  //lena hai
  temp.push_back(s[idx]);
  subset(s,idx+1,n,temp,ans);
  temp.pop_back();
}
int main()
{
  string s = "abc";
  string temp;
  int n = s.size();
  int idx = 0;
  vector<string>ans;
  subset(s,idx,n,temp,ans);
  for(int i = 0; i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
}