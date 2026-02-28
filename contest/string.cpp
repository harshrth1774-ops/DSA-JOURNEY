#include<iostream>
#include<vector>
#include<stack>
using namespace std;



int main()
{
  int t; cin>>t;

  while(t--)
  {
    int n; cin>>n;

    string s;
    cin>>s;

    stack<char>st;
    st.push(s[0]);

      for(int i = 1; i<n; i++){
        
        char ch = s[i];

        if(!st.empty() && ch == st.top()){
          st.pop();
        }else{
          st.push(ch);
        }
      }
     
    if(st.empty()) cout<<"YES" <<endl;
    else cout<<"NO" <<endl;
  }
}