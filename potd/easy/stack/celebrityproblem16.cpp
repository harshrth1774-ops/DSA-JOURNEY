#include <vector>
#include <algorithm> // for max
using namespace std;
class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int countzero = -1;
        int ans = -1;

        for(int i = 0; i < row; i++) {
            int count = 0;
            for(int j = 0; j < col; j++) {
                if(mat[i][j] == 0) count++;
            }
            if(count > countzero) {
                countzero = max(count, countzero);
                ans = i;
            }
        }

        
        int i = 0, j = ans;
        int countone = 0;
        while(i < row) {
            if(i == j) {
                i++;
                continue;
            }
            else if(mat[i][j] == 1) {
                countone++;
            }
            i++;
        }
        
        if(countone == row - 1)
            return ans;
        else
            return -1;
    }
};
