#include<iostream>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n,k; cin>>n>>k;
    char ch[n][n];
    int p = k;
    if((n*n)-k!=1){
      cout<<"YES"<<endl;

      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          //starting filling the cells from which he can escape means k
          if(p>0){
          ch[i][j]='U';
          p--;
          }
          else{
          //now putting conditions from which he can't escape
          //1.if he is on the first row means up cannt go up
          if(i==0){
            ch[i][j]='D';
          }
          //2.if he is on the first column then he cant go up and left
          else if(j==0){
            ch[i][j]='R';
          }
          //3.if he is on the last column anywhere but not on the last row which means that he cant go right and up
          else if(j==n-1 && i!=n-1){
            ch[i][j]='D';
          }
          //4.now if he is on the last column and last row thn it means he can go down and right he have to move left
          else if(i==n-1 && j==n-1){
            ch[i][j]='L';
          }
          //5.now he is on the last row anywhere which cant be on the last column;
          else if(i==n-1 && j!=n-1){
            ch[i][j]='R';
          }
          //now left with the remaining cells
          else{
            ch[i][j]='R';
          }

          }
        }
      }
    }
    for(int i=0; i<n;i++){
      for(int j=0; j<n; j++){
        cout<<ch[i][j];
      }
      cout<<endl;
    }
  }
  else{
    cout<<"NO"<<endl;
  }
  return 0;
}