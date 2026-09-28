#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    long long x; cin>>x;

    string s = to_string(x);

    for(int i = 0; i<s.size(); i++){

      if(i == 0 && s[i] == '9') continue;

      int num = s[i] - '0';

      if(num >=5 && num <=9){

         int digit = 9 - (s[i] - '0') + '0';
         s[i] = digit + '0';

      }
    }
    long long ans = stoi(s);
    cout<<ans <<endl;

    return 0;
}