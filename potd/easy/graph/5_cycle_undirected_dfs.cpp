class Solution {
  public:
   
   bool dfs(vector<vector<int>>& adj, vector<bool>& visited, int node, int parent){
       
       visited[node] = true;
       
       for(int &ngr : adj[node]){
           
           if(parent == ngr) continue;
           
          else if(visited[ngr] == false){
               int ans = dfs(adj, visited, ngr, node);
               if(ans == true) return true;
           }
           
           else if(visited[ngr] == true && ngr != parent){
               return true;
           }
       }
       
       return false;
   }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        
        for(int i = 0; i<edges.size(); i++){
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool>visited(V,0);
        
        for(int i = 0; i<V; i++){
            
            if(!visited[i]){
                
               bool ans =  dfs(adj,visited,i,-1);
               
               if(ans == true) return true;
            }
        }
        return false;
    }
};