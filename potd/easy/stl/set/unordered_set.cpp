#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_set<int>set1;

    set1.insert(3);
    set1.insert(7);
    set1.insert(9);
    set1.insert(2);
    set1.insert(4);
    set1.insert(1);

    for(auto it : set1)
    cout<<it <<" ";

}