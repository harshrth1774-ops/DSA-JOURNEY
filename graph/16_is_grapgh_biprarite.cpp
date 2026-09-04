class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<int>& color, int currnode, int currcolor){

        color[currnode] = currcolor;

        for(int &ngr : graph[currnode]){

            if(color[ngr] == color[currnode]){
                return false;
            }
            if(color[ngr] == -1){
                color[ngr] = 1- currcolor;
                bool ans = dfs(graph, color, ngr, color[ngr]);

                if(ans == false) return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<int>color(n,-1);

        for(int i = 0; i<n; i++){

            if(color[i] == -1){

               bool ans = dfs(graph, color, i, 1);
               if(ans == false) return false;
               
            }
        }
        return true;
    }
};