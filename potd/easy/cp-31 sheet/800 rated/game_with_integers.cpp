// #include <bits/stdc++.h>
// using namespace std;

// int main(){
    
//   int t; cin>>t;

//   while(t--){
    
//     int n; cin>>n;

//     if(n == 1){
//       cout<<"First" <<endl;
//       continue;
//     }
//     if(n % 3 == 0){
//       cout<<"Second" <<endl;
//       continue;
//     }
//     int n1 = n;
//     int n2 = n;
//     int d1 = 0;
//     while(n1){

//       if(n1+1 % 3 == 0){
//         d1++;
//        break;
//       }

//       else{
//         d1++;
//         n1++;
//       }
//     }
    
//     int d2 = 0;
//     while(n2){

//       if((n2-1) % 3 == 0){
//         d2++;
//         break;
//       }else{
//         d2++;
//         n2--;
//       }

//     }
//     int mini = min(d1,d2);

//     if(mini < 3){
//       cout<<"First" <<endl;
//     }else{
//       cout<<"Second" <<endl;
//     }

//   }
// }

#include <bits/stdc++.h>
using namespace std;

int main(){
  
  int t; cin>>t;

  while(t--){

    int n; cin>>n;

    if(n % 3 == 0){
      cout<<"Second" <<endl;
      continue;
    }else{
      cout<<"First" <<endl;
    }

  }
}