#include <bits/stdc++.h>
using namespace std;

int main(){
   
   int vertex,edges;
   cin>>vertex >>edges;
   
   int arr[vertex][vertex] = {};

   for(int i = 0; i<edges; i++){

    int u,v;
    cin>>u >>v;

    arr[u][v] = 1;
    arr[v][u] = 1;
   }

   for(int i = 0; i<vertex;i++){

    for(int j = 0; j<vertex; j++){

      cout<<arr[i][j] <<" ";
    }
    cout<<endl;
   }


    return 0;
}