#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; 
    cin>>t;

    while(t--){

      string grid[10];
      for(int i = 0; i<10; i++)
      cin>>grid[i]; 

        const int score[10][10] = {
        {1,1,1,1,1,1,1,1,1,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,5,5,4,3,2,1},
        {1,2,3,4,4,4,4,3,2,1},
        {1,2,3,3,3,3,3,3,2,1},
        {1,2,2,2,2,2,2,2,2,1},
        {1,1,1,1,1,1,1,1,1,1}
    };

    int ans = 0;
    for(int i = 0; i<10; i++){
      for(int j = 0; j<10; j++){

        if(grid[i][j] == 'X'){
          ans = ans + score[i][j];
        }
      }
    }

    cout<<ans <<endl;
    }

    return 0;
}