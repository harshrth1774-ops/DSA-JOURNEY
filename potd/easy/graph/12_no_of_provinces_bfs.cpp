class Solution {
public:
   
   void bfs( unordered_map<int,vector<int>>&adj,  vector<bool>&visited, int u){

    queue<int>q;
    visited[u] = 1;
    q.push(u);

    for(int &ngr : adj[u]){

        if(!visited[ngr]){
            bfs(adj, visited, ngr);
        }
    }
    
   }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        unordered_map<int,vector<int>>adj;

        for(int i = 0; i<n; i++){

            for(int j = 0; j<n; j++){

                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool>visited(n,false);

        int cnt = 0;
        for(int i = 0; i<n; i++){
            
            if(!visited[i]){

                bfs(adj, visited, i);
                cnt++;
            }
        }
        return cnt;

    }
};