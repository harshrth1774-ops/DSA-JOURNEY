class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
       // if(V == 2) return false;
        
        vector<vector<int>>adj(V);
       for(int i = 0; i<edges.size(); i++){
           
           int  u = edges[i][0];
           int  v = edges[i][1];
           
           adj[u].push_back(v);
           adj[v].push_back(u);
           
       }
       
       vector<bool>visited(V,0);
       queue<pair<int,int>>q;
      
       
       for(int i = 0; i<V; i++){
           
           if(visited[i] == true) continue;
           
           q.push({i,-1});
           visited[i] = true;
       while(!q.empty()){
           
           int node   = q.front().first;
           int parent = q.front().second;
           
           q.pop();
           
           for(int i = 0; i<adj[node].size(); i++){
               
               if(adj[node][i] == parent) continue;
               
               else if(visited[adj[node][i]] == false){
                   
                   visited[adj[node][i]] = true;
                   q.push({adj[node][i],node});
               }
               
               else if(visited[adj[node][i]] == true && adj[node][i] != parent){
                   return true;
               }
                   
           }
       }
      } 
       return false;
    }
}; 