class Solution {
public:
    int bfs(vector<vector<int>>& grid, int i, int j, int row, int col) {

        queue<pair<int,int>> q;
        q.push({i,j});

        grid[i][j] = '$';

        int cnt = 1;
        bool boundary = false;

        while(!q.empty()) {

            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x == 0 || x == row-1 || y == 0 || y == col-1) {
                boundary = true;
            }

            if(x-1 >= 0 && grid[x-1][y] == 1) {
                q.push({x-1,y});
                grid[x-1][y] = '$';
                cnt++;
            }

            if(x+1 < row && grid[x+1][y] == 1) {
                q.push({x+1,y});
                grid[x+1][y] = '$';
                cnt++;
            }

            if(y-1 >= 0 && grid[x][y-1] == 1) {
                q.push({x,y-1});
                grid[x][y-1] = '$';
                cnt++;
            }

            if(y+1 < col && grid[x][y+1] == 1) {
                q.push({x,y+1});
                grid[x][y+1] = '$';
                cnt++;
            }
        }

        if(boundary) {
            return 0;
        }

        return cnt;
    }

    int numEnclaves(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();

        int cnt = 0;

        for(int i = 0; i < row; i++) {

            for(int j = 0; j < col; j++) {

                if(grid[i][j] == 1) {
                    cnt += bfs(grid, i, j, row, col);
                }
            }
        }

        return cnt;
    }
};