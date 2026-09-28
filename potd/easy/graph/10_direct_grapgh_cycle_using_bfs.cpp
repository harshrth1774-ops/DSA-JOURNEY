class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>>adj(V);
        for(int i = 0; i<edges.size(); i++){
            
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        //step 1 find indegree
        vector<int>indegree(V,0);
        for(int i = 0; i<adj.size(); i++){
            
            for(int &ngr : adj[i]){
                
                indegree[ngr]++;
            }
        }
        
        //step 2 push 0 indegree into queue
        queue<int>q;
        for(int i = 0; i<indegree.size(); i++){
            
            if(indegree[i] == 0) q.push(i);
        }
        
        vector<int>ans;
        while(!q.empty()){
            
            int node = q.front();
            ans.push_back(node);
            q.pop();
            
            for(int ngr : adj[node]){
                
                indegree[ngr]--;
                
                if(indegree[ngr] == 0) q.push(ngr);
            }
        }
        
        if(ans.size() == V) return false;
        
        return true;
        
    }
};