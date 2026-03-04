/* brute force   TC(O(rows×cols×(rows+cols)))  SC:- 0(1)*/

class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        int count = 0;
        
        for(int i = 0; i<rows; i++){
            for(int j = 0; j<cols; j++){
                if(mat[i][j] == 0) continue;

                bool special = true;
                //row dekhunga kahi 1 toh ni hai and column chnage hoga
                for(int c = 0; c<cols; c++){
                    if( c != j && mat[i][c] == 1){
                        special = false;
                        break;
                    }
                }
                //column dekhunga 1 toh ni hai and row chnage hoga
                for(int r = 0; r<rows; r++){
                    if(r != i && mat[r][j] == 1){
                        special = false;
                        break;
                    }
                }
                if(special ==  true){
                    count++;
                }
            }
        }
        return count;
    }
};

/* optimse approach   TC:- O(mn)*/
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
    
        vector<int>rows(mat.size(),0);
        vector<int>colums(mat[0].size(),0);

        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){

                if(mat[i][j] == 0) continue;
                
                    rows[i]++;
                    colums[j]++;
            
            }
        }
        int count = 0;
        for(int i = 0; i<mat.size(); i++){
            for(int j = 0; j<mat[0].size(); j++){

                if(mat[i][j] == 0) continue;
                
                if(rows[i] == 1 && colums[j] == 1){
                        count++;   
                }
            }
        }
        return count;
    }
};