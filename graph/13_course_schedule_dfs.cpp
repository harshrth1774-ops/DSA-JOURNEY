class Solution {
public:
    
    bool dfs(unordered_map<int,vector<int>>& adj, vector<bool>& path, vector<bool>& visited, int node){

        visited[node] = 1;
        path[node] = 1;

        for(int &ngr : adj[node]){

            if(path[ngr] == 1) return 1;

            else if(!visited[ngr]){
                bool ans = dfs(adj, path, visited, ngr);
                if(ans == 1) return 1;
            }
        }
        path[node] = 0;
        return 0;
    }
    bool canFinish(int numCourses, vector<vector<int>>& grid) {
        
        int n = numCourses;

        unordered_map<int, vector<int>>adj;
        for(int i = 0; i<grid.size(); i++){

            int u = grid[i][0];
            int v = grid[i][1];

            adj[u].push_back(v);
        }

        vector<bool>visited(n,0);
        vector<bool>path(n,0);
        for(int i = 0; i<n; i++){

            if(!visited[i]){

              bool ans =  dfs(adj, path, visited, i);
              if(ans == 1) return 0;
            }
        }
        return true;
    }
};