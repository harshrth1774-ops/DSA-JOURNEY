#include <bits/stdc++.h>
using namespace std;

 void dfs(adj, node, visited){

  if(visited[node] == true) return;

  visited[node] = true;
  
  for(int &v : adj[node]){

    if(visited[v] == false){
      dfs(adj,v,visited);
    }
  }

 }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    

    return 0;
}