
// Complexity	Your code
// Time	O(2^(row + col))
// Space	O(row + col)

class Solution {
public:
    bool fun(vector<vector<char>>& grid, int i, int j, int row, int col, int open){

        if(grid[i][j] == '('){
            open++;
        }else{
            open--;
        }

        if(open < 0) return false;

        if(i == row - 1 && j == col - 1){
            
            if(open == 0) return true;

            return false;
        }

        bool down = false;
        bool right = false;

        if(i + 1 < row){

         down = fun(grid, i+1, j, row, col, open);

        }

        if(j+1 < col){

            right = fun(grid, i, j+1, row, col, open);


        }
        return (down || right);

        
    }
    bool hasValidPath(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();

        int i = 0;
        int j = 0;

        return fun(grid, i, j, row, col, 0);
    }
};

class Solution {
public:
    int m, n;
    int t[101][101][201];

    // Time Complexity: O(m * n * (m + n))
    // Space Complexity: O(m * n * (m + n)) for DP table
    //                  + O(m + n) recursion stack
    bool solve(int i, int j, int openCount, vector<vector<char>>& grid) {

        openCount += (grid[i][j] == '(') ? 1 : -1;

        if(openCount < 0)
            return false;

        if(t[i][j][openCount] != -1) {
            return t[i][j][openCount];
        }

        if(i == m-1 && j == n-1)
            return t[i][j][openCount] = (openCount == 0);

        // mode down
        if(i+1 < m) {
            if(solve(i+1, j, openCount, grid))
                return t[i][j][openCount] = true;
        }

        // mode right
        if(j+1 < n) {
            if(solve(i, j+1, openCount, grid))
                return t[i][j][openCount] = true;
        }

        return t[i][j][openCount] = false;
    }

    bool hasValidPath(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();

        if((m+n-1) % 2 == 1)
            return false;

        if(grid[0][0] == ')' || grid[m-1][n-1] == '(')
            return false;

        memset(t, -1, sizeof(t));

        return solve(0, 0, 0, grid);
    }
};
