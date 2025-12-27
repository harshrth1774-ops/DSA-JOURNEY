#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    
    string s;
    cin>>s;
    
    int chef = 0;
    int antichef = 0;
    int ways = 0;

    int  i = 0;
    while(i < n){

      if(s[i] == '1'){
        chef++;
        i++;
      }else{
        antichef++;
        i++;
      }

      if(chef > antichef){
        ways++;
      }
    }
    cout<<ways <<endl;
  }
}
