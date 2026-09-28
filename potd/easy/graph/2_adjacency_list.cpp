#include <bits/stdc++.h>
using namespace std;

//undirected graph
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int vertex,edges;
    cin>>vertex >>edges;

    unordered_map<int,vector<int>>adj;

    for(int i = 0; i<edges; i++){

      int u,v;
      cin>>u >>v;

      adj[u].push_back(v);
      adj[v].push_back(u);
    }

    for(int i = 0; i<vertex; i++){

      cout<<i <<"->";

      for(int j = 0; j<adj[i].size(); j++){

        cout<<adj[i][j] <<" ";
      }
      cout<<endl;
    }

}

//undirected weighted graph

int main()
{
  unordered_map<int,vector<pair<int,int>>> adj;

  int vertex,edges;
  cin>>vertex >>edges;

  for(int i = 0; i<edges; i++){

    int u,v,weight;
    adj[u].push_back({v,weight});
    adj[v].push_back({u,weight});
  }

  for(int i = 0; i<vertex; i++){

    cout<<i <<"->";

    for(int j = 0; j<adj[i].size(); i++){

      cout <<adj[i][j].first <<" " <<adj[i][j].second <<" ";
    }
    cout<<endl;
  }
}