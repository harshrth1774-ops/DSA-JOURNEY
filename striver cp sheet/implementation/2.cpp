#include <bits/stdc++.h>
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string>arr= {"apple", "google", "tesla"};

    sort(arr.begin(), arr.end(), [](string a, string b){

      return a.size() < b.size();
    });

  for(string s : arr)
  cout<<s <<" ";
    return 0;
}