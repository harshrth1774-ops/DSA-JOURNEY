#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>v1 = {1,1,2,3,3,3};
    vector<int>v2 = {5,6,7,5,2,3,6};

    set<int>st1;
    for(int i = 0; i<v1.size(); i++)
    st1.insert(v1[i]);

    int sum = 0;
    for(auto ele : v2){
      if(st1.find(ele) != st1.end()){
        sum += ele;
      }
    }
    cout<<sum;
    return 0;
}