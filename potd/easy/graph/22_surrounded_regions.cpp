class Solution {
public:
    
//approach boundary O->#
    void dfs(vector<vector<char>>& grid, int i, int j, int row, int col){

        grid[i][j] = '#';
        
        //left
        if(j-1 >=0 && grid[i][j-1] == 'O'){
            dfs(grid, i, j-1, row, col);
        }

        //right
        if(j+1 < col && grid[i][j+1] == 'O'){
            dfs(grid, i, j+1, row, col);
        }
        //up
        if(i-1 >=0 && grid[i-1][j] == 'O'){
            dfs(grid, i-1, j, row, col); 
        }
        //down
        if(i+1 < row && grid[i+1][j] == 'O'){
            dfs(grid, i+1, j, row, col);
        }
    }
    void solve(vector<vector<char>>& grid) {
        
        int row = grid.size();
        int col = grid[0].size();


        //first row
        for(int j = 0; j<col; j++){
            if(grid[0][j] == 'O')
            grid[0][j] = '#';
        }
        //last row
        for(int j = 0; j<col; j++){

            if(grid[row-1][j] == 'O')
            grid[row-1][j] = '#';
        }
        //first col
        for(int i = 0; i<row; i++){
            if(grid[i][0] == 'O')
            grid[i][0] = '#';
        }
        //last col 
        for(int i = 0; i<row; i++){

            if(grid[i][col-1] == 'O')
            grid[i][col-1] = '#';
        }

        for(int i = 0; i<row; i++){

            for(int j = 0; j<col; j++){

                if(grid[i][j] == '#'){
                    dfs(grid, i, j, row, col);
                }
            }
        }
        //#-O
        //O->#
        for(int i = 0; i<row; i++){

            for(int j = 0; j<col; j++){

                if(grid[i][j] == '#'){
                    grid[i][j] = 'O';
                }
                
               else if(grid[i][j] == 'O'){
                grid[i][j] = 'X';
               }
            }
        }
    }
};