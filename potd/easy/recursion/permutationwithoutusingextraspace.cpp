#include<iostream>
#include<vector>
using namespace std;

void fun(vector<int>& arr, int n, int pos, vector<vector<int>>& ans)
{
  if(pos == n){
    ans.push_back(arr);
    return;
  }

  for(int i = pos; i<n; i++){

    swap(arr[i],arr[pos]);
    fun(arr, n, pos+1, ans);
    swap(arr[i],arr[pos]);

  }
}
int main()
{
  vector<int>arr = {1,2,3};
  int pos = 0;
  int n = arr.size();
  vector<vector<int>>ans;

  fun(arr,n,pos,ans);
  for(int i = 0; i<ans.size(); i++){

    for(int j = 0; j<ans[0].size(); j++){

      cout<<ans[i][j] <<" ";
    }
    cout<<endl;
  }
}