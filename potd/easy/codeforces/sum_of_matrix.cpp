#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int R,C;
    cin>>R >>C;

    vector<vector<int>> A(R, vector<int>(C));
    vector<vector<int>> B(R, vector<int>(C));

    //metrix A
    for(int i = 0;i<R; i++){

      for(int j = 0; j<C;j++){

        cin>>A[i][j];
      }
    }

    //matrix B
    for(int i = 0;i<R; i++){

      for(int j = 0; j<C;j++){

        cin>>B[i][j];
      }
    }

    vector<vector<int>> res(R, vector<int>(C));  //resultant

    for(int i = 0;i<R; i++){

      for(int j = 0; j<C; j++){

        res[i][j] = A[i][j] + B[i][j];
      }
    }

    //print res
    for(int i = 0; i<R; i++){

      for(int j = 0; j<C; j++){

        cout<<res[i][j] <<" ";
      }
      cout<<endl;
    }
    

    return 0;
}