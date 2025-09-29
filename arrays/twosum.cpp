//NOTE:-1. in this problem the array is given sorted but when array is  not sorted we have to use map

//NOTE:-2. jab bhi indices pochta hai ques mai always remeber ki tum array ko sort ni kr skte ho


#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> &arr, int target)
{
  int i=0,j=arr.size()-1;
  int first=-1,second=-1;
  while(i<j)
  {
    if(arr[i] + arr[j]==target)
    {
      first=i;
      second=j;
      break;
    }else if(arr[i] + arr[j]>target) j--;
    else i++;
  }
  vector<int>ans(2);
  ans[0]=first;
  ans[1]=second;
  return ans;
}
int main()
{
  vector<int>arr={2,7,11,15};
  int target=9;
  vector<int> result=twoSum(arr,target);
  cout<<result[0]<<" "<<result[1];

  return 0;
}