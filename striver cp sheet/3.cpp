#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row = 5;
    

    vector<vector<int>>mat(row, vector<int>(row));

    for(int i = 0; i<row; i++){

      for(int j = 0; j<row; j++){

        cin>>mat[i][j];
      }
    }

    int x = -1;
    int y = -1;
    for(int i = 0; i<row; i++){

      for(int j = 0; j<row; j++){

        if(mat[i][j] == 1){
          x = i;
          y = j;
        }
      }
    }
    int d = abs(x - 3) + abs(y - 3);
    cout<<d <<endl;


    return 0;
}