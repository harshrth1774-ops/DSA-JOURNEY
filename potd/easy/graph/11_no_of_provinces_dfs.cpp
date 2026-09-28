class Solution {
public:
    void dfs(vector<vector<int>>&isconnected, vector<bool>& visited, int u){

      // forgetting part
        visited[u] = true;

        for(int v = 0 ; v<isconnected.size(); v++){

           if(isconnected[u][v] == 1 && !visited[v]){
            dfs(connected, visited, v);
           }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int v = isConnected.size();
       

        
        vector<bool>visited(v,0);
        int cnt = 0;
        for(int i = 0; i<v; i++){

            if(!visited[i]){
            dfs(isconnected, visited, i);
            cnt++;
            }
            
        }
        return cnt;
    }
};