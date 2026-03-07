// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t; cin>>t;

//     while(t--){
//       int n; cin>>n;

//       string s; cin>>s;

//       bool flag = false;
//       int i = 0;

//       while(i < n){
//         int count = 0;

//         while(i<n && s[i] == '#') {
//           i++;
//           continue;
//         }

//         while(i<n && s[i] == '.'){
//           count++;
//           i++;
//         }

//         if(count >= 3){
//           flag = true;
//           break;
//         }
//       }

//       if(flag == true){
//         cout<<2 <<endl;
//         continue;
//       }

//       int j = 0;
//       int op = 0;
//       while(j<n){
//         //int cnt = 0;

//         while(j<n && s[j] == '#') {
//           j++;
//           continue;
//         }

//         while(j<n && s[j] == '.'){
//           op++;
//           j++;
//         }
//       }
//       cout<<op <<endl;
//     }
// }

/*not another method but little code*/
#include <bits/stdc++.h>
using namespace std;

int main(){

  int t; cin>>t;

  while(t--){
    int n; cin>>n;

    string s; cin>>s;

    bool iscontious_empty_cells_exist = false;
    int count_of_empty_cells = 0;

    for(int i = 0; i<n; i++){

      if(s[i] == '.' && i+1 < n && s[i+1] == '.' && i+2<n && s[i+2] == '.'){
        iscontious_empty_cells_exist = true;
        break;
      }
      if(s[i] == '.'){
        count_of_empty_cells++;
      }
    }

    if(iscontious_empty_cells_exist){
      cout<<2 <<endl;
      continue;
    }
    cout<<count_of_empty_cells <<endl;
  }
}