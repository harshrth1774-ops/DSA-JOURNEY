class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>>ans(row, vector<int>(col,-1));

        queue<pair<int,int>>q;

        for(int i = 0; i<row; i++){

            for(int j = 0; j<col; j++){

                if(grid[i][j] == 0){

                    q.push({i,j});
                    ans[i][j] = 0;
                }
            }
        }

        //bfs
        while(!q.empty()){

            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            //up
            if(i-1 >= 0 && ans[i-1][j] == -1){
                ans[i-1][j] = ans[i][j] + 1;
                q.push({i-1,j});
            }
            //down
            if(i+1 < row && ans[i+1][j] == -1){
                ans[i+1][j] = ans[i][j] + 1;
                q.push({i+1,j});
            }

            //left
            if(j-1 >= 0 && ans[i][j-1] == -1){
                ans[i][j-1] = ans[i][j] + 1;
                q.push({i,j-1});
            }

            //right
            if(j+1 < col && ans[i][j+1] == -1){
                ans[i][j+1] = ans[i][j] + 1;
                q.push({i,j+1});
            }
        }
        return ans;
    }
};