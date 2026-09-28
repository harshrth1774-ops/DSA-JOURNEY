class Solution {
  public:
    
    void dfs(vector<vector<int>>& adj, vector<bool>& visited, int node){

        visited[node] = true;

        for(int &ngr : adj[node]){

            if(visited[ngr] == false){
                dfs(adj, visited, ngr);
            }
        }
    }
    int findNumberOfComponent(int V, vector<vector<int>> &edges) {

        //adjacency list

        vector<vector<int>>adj(V);

        for(int i = 0; i<edges.size(); i++){

            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
        }

        vector<bool>visited(V,0);
        int cnt = 0;

        for(int i = 0; i<V; i++){

            if(!visited[i]){

                dfs(adj, visited, i);
                cnt++;
            }
        }
        
        return cnt;
    }
};