class Solution {
  public:
    
    void dfs(vector<vector<int>>& adj, vector<bool>& visited, int node, stack<int>& st){
        
        visited[node] = true;
        
        for(int &ngr : adj[node]){
            
            
            if(visited[ngr] == 0){
                
                dfs(adj, visited, ngr, st);
            }
        }
        
        st.push(node);
        
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        vector<vector<int>>adj(V);
        
        for(int i = 0; i<edges.size(); i++){
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        vector<bool>visited(V,0);
        stack<int>st;
        
        for(int i = 0; i<V; i++){
            
            if(!visited[i]){
                
                dfs(adj, visited, i, st);
            }
        }
        
        vector<int>ans;
        while(!st.empty()){
            
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};