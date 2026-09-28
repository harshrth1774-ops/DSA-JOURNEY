class Solution {
  public:
    bool dfs(vector<vector<int>>&adj, vector<bool>& path, vector<bool>& visited, int node){
        
        visited[node] = 1;
        path[node] = 1;
        
        
        for(int ngr : adj[node]){
            
            if(path[ngr] == true) return true;
            
            if(visited[ngr] == true) continue;
            
            bool ans = dfs(adj, path, visited, ngr);
            if(ans == true) return true;
            
        }
        path[node] = 0;
        
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        //adjacency list
        
        vector<vector<int>>adj(V);
        for(int i = 0; i<edges.size(); i++){
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        vector<bool>path(V,0);
        vector<bool>visited(V,0);
        
        for(int i = 0; i<V; i++){
            
            if(visited[i] == 0){
                
               bool ans =  dfs(adj, path, visited, i);
               
               if(ans == 1) return 1;
            }
        }
        return false;
        
    }
};