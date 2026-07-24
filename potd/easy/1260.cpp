class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> ans(row, vector<int>(col));

        while(k--){

        for(int i = 0; i<row; i++){

            for(int j = 0; j<col; j++){

                if(i == row-1 && j == col-1){
                    ans[0][0] = grid[i][j];

                }else if(j == col - 1){
                    ans[i+1][0] = grid[i][j];
                }else{
                    ans[i][j+1] = grid[i][j];
                }
            }
            
        }
        grid = ans;
      }
        return grid;
    }
};