#include<iostream>
#include<vector>
using namespace std;
void printArray(vector<int>v, int index, int n)
{
  if(index==n)
  return;
  
  cout<<v[index]<<" ";
  printArray(v,index+1,n);
}

//reverse printing of an array
void reversePrintArray(vector<int>v, int idx, int n)
{
  if(idx==n)
    return;
    
  reversePrintArray(v,idx+1,n);
  cout<<v[idx]<<endl;
}
int main()
{
  //vector<int>v={3,7,2,6,8};
  // int index=0;
  // int n=5;
  // printArray(v,index,n);

  //2.
  vector<int>v={3,7,2,6,8};
  int idx=0;
  int n=v.size();
  reversePrintArray(v,idx,n);



}