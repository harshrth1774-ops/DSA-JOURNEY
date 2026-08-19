#include <bits/stdc++.h>
using namespace std;

int main(){

  int n = adj.size();

  queue<int>q;
  vector<bool>visited(n,0);
  q.push(0);
  visited[0] = 1;
  
  vector<int>ans;

  while(!q.empty()){

    int node = q.front();
    q.pop();

    ans.push_back(node);

    for(int j = 0; j<adj[node].size(); j++){

      if(visited[adj[node][j]] == false){

        visited[adj[node][j]] = 1;
        q.push(adj[node][j]);
      }
    }
  }

    return 0;
}