#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;

  bool flag = 0; //initially maan liya sabhi ne easy(0) kaha
  for(int i=0; i<n; i++){
    int opinion;     //opinion aaya input  mai
    cin>> opinion;
    if(opinion == 1){  //agar opinion 1 mtlab hard hua then flag ko 1 kr
      flag = 1;        // diya
    }

  }
  if(flag)cout<<"HARD"<<endl;   //agar flag exist krega 
  else cout<<"EASY"<<endl;      
}