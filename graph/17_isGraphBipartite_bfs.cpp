class Solution {
public:
    
    bool bfs(vector<vector<int>>& graph, vector<int>& color, int currnode, int currcolor){

        queue<int>q;
        q.push(currnode);
        color[currnode] = currcolor;

        while(!q.empty()){

            int node = q.front();
            q.pop();

            for(int &ngr : graph[node]){

                if(color[ngr] == color[node]) return false;

                else if(color[ngr] == -1){

                    color[ngr] = 1 - color[node];
                    q.push(ngr);

                  
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();

        vector<int>color(n,-1);

        for(int i = 0; i<n; i++){

            if(color[i] == -1){

                bool ans = bfs(graph, color, i, 1);

                if(ans == false) return false;
            }
        }
        return true;
    }
};