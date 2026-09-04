class Solution {
public:
    bool hascycle = false;
    void  dfs(unordered_map<int, vector<int>>&adj, vector<bool>& path, vector<bool>&visited, int node, stack<int>& st){

        visited[node] = 1;
        path[node] = 1;

        for(int &ngr :adj[node]){

            if(path[ngr] == 1){
                hascycle = 1;
                return;
            }

            if(!visited[ngr]){

                 dfs(adj, path, visited, ngr, st);
                
            }
        }
        st.push(node);
        path[node] = 0;


    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& grid) {
        
        int n = numCourses;
        unordered_map<int, vector<int>>adj;
        for(int i = 0; i<grid.size(); i++){

            int u = grid[i][0];
            int v = grid[i][1];

            adj[v].push_back(u);
        }
        
        vector<bool>path(n,0);
        vector<bool>visited(n,0);
        stack<int>st;

        for(int i = 0; i<n; i++){

            if(!visited[i]){

             dfs(adj, path, visited, i, st);
                
            }
        }
        vector<int>ans;
        if(hascycle) return ans;

        while(!st.empty()){

            ans.push_back(st.top());
            st.pop();
        }
        return ans;


        

    }
};