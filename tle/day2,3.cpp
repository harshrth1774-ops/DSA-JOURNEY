#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  
  int first = 0, second = 1;
  for(int i =2; i<n; i++){
    int sum = first+second;
    first=second;
    second = sum;
  }
  cout<<second<<endl;
}