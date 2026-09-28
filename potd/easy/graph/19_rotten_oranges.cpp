class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int,int>> q;

        int ones = 0;

        // Put all rotten oranges in queue
        // and count fresh oranges
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {

                if(grid[i][j] == 1) {
                    ones++;
                }

                if(grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }

        int minutes = 0;

        while(!q.empty() && ones > 0) {

            int size = q.size();

            // Process all oranges of current minute
            for(int k = 0; k < size; k++) {

                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                // UP
                if(i - 1 >= 0 && grid[i-1][j] == 1) {

                    grid[i-1][j] = 2;
                    ones--;

                    q.push({i-1, j});
                }

                // DOWN
                if(i + 1 < row && grid[i+1][j] == 1) {

                    grid[i+1][j] = 2;
                    ones--;

                    q.push({i+1, j});
                }

                // LEFT
                if(j - 1 >= 0 && grid[i][j-1] == 1) {

                    grid[i][j-1] = 2;
                    ones--;

                    q.push({i, j-1});
                }

                // RIGHT
                if(j + 1 < col && grid[i][j+1] == 1) {

                    grid[i][j+1] = 2;
                    ones--;

                    q.push({i, j+1});
                }
            }

            minutes++;
        }

        // Fresh oranges are still remaining
        if(ones > 0) {
            return -1;
        }

        return minutes;
    }
};