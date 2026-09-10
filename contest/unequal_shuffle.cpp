#include<iostream>
using namespace std;

int main(){

  uint t;
  cin>>t;

  while(t--){

    int n;
    cin>>n;

    string A,B;
    cin>>A>>B;

    int cnt_a  = 0, cnt_b = 0;

    for(char ch : A){
      
      if(ch == 'a'){
        cnt_a++;
      }else{
        cnt_b++;
      }
    }

    int cnt_a_B = 0, cnt_b_B = 0;
    for(char ch : B){
      
      if(ch == 'a'){
        cnt_a++;
      }else{
        cnt_b++;
      }
    }

    if(cnt_a == cnt_b_B && cnt_b == cnt_b_B){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}