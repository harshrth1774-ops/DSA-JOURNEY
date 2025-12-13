#include<iostream>
#include<vector>
using namespace std;
void sequence(int arr[], int idx, int n, vector<int>&temp, vector<vector<int>>&ans)
{
  if(idx == n){
    ans.push_back(temp);
    return; 
  }
  //no
  sequence(arr,idx+1,n,temp,ans);
  //yes
  temp.push_back(arr[idx]); 
   sequence(arr,idx+1,n,temp,ans);
}
using namespace std;
int main()
{
  int arr[]={1,2,3};
  int n = 3;
  int idx = 0;
  vector<vector<int>>ans;
  vector<int>temp;
  sequence(arr,0,3,temp,ans);
  
  //printing
  for(int i=0; i<ans.size(); i++){
    
    for(int j = 0; j<ans[i].size(); j++){
      cout<<ans[i][j] <<" ";
    }
    cout<<endl;
  }
}