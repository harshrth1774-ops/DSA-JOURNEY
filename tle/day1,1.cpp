#include<iostream>
using namespace std;
int main()
{
  int n; cin>>n;
  for(int i=0; i<n; i++){
    int num; cin>>num;

    if(num == 1) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
  }
  return 0;
}