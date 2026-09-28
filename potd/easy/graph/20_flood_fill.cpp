class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        
        int row = grid.size();
        int col = grid[0].size();

        int initial_color = grid[sr][sc];

        if(initial_color == color) return grid;

        queue<pair<int,int>> q;
        q.push({sr, sc});

        while(!q.empty()) {

            int i = q.front().first;
            int j = q.front().second;
            q.pop();

            grid[i][j] = color;

            // left
            if(j - 1 >= 0 && grid[i][j - 1] == initial_color) {
                q.push({i, j - 1});
            }

            // right
            if(j + 1 < col && grid[i][j + 1] == initial_color) {
                q.push({i, j + 1});
            }

            // up
            if(i - 1 >= 0 && grid[i - 1][j] == initial_color) {
                q.push({i - 1, j});
            }

            // down
            if(i + 1 < row && grid[i + 1][j] == initial_color) {
                q.push({i + 1, j});
            }
        }

        return grid;
    }
};

/* dfs*/

class Solution {
public:

    void fun(vector<vector<int>>& grid, int i, int j,
             int initial_color, int color) {

        if(grid[i][j] == color) {
            return;
        }

        grid[i][j] = color;

        // left
        if(j - 1 >= 0 && grid[i][j - 1] == initial_color) {
            fun(grid, i, j - 1, initial_color, color);
        }

        // right
        if(j + 1 < grid[0].size() && grid[i][j + 1] == initial_color) {
            fun(grid, i, j + 1, initial_color, color);
        }

        // down
        if(i + 1 < grid.size() && grid[i + 1][j] == initial_color) {
            fun(grid, i + 1, j, initial_color, color);
        }

        // up
        if(i - 1 >= 0 && grid[i - 1][j] == initial_color) {
            fun(grid, i - 1, j, initial_color, color);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& grid,
                                   int sr, int sc, int color) {

        int initial_color = grid[sr][sc];

        if(initial_color == color) {
            return grid;
        }

        fun(grid, sr, sc, initial_color, color);

        return grid;
    }
};