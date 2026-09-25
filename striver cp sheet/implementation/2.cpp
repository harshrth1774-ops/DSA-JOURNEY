#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    long long x;
    cin>>x;

    if(x >=0 && x <=4){
      cout<<x <<endl;
      return 0;
    }
    string s = to_string(x);
    
    long long maxi = INT_MIN;
    for(int i = 0; i<s.size(); i++){

      long long num = s[i] - '0';

      maxi = max(maxi, num);
    }

    for(int i = 0; i<s.size(); i++){

      long long num = s[i] - '0';

      if(num == maxi){
        s[i]  = 9 - (s[i] - '0') + '0';
      }
    }
    long long ans = stoll(s);

    cout<<ans <<endl;
    return 0;
}