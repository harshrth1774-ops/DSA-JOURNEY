#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    cin>>arr[i];

    sort(arr.begin(), arr.end());
    int count = 0;
    int start = 0, end = start+1;
    while(end<arr.size())
    {
      if(arr[start] != arr[end]){
        count++;
        start++;
        end++;
      }
      else{
        start++;
        end++;
      }
    }
    cout<<count+1 <<endl;
  }
}