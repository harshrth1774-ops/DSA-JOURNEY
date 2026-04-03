#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
      
      int n;
       cin>>n;

       vector<int>arr(n);
       for(int i = 0; i<n; i++){
        cin>>arr[i];
       }

       int total_two = 0;
       for(int i = 0; i<n; i++){

        if(arr[i] == 2) total_two++;
       }

       if(total_two % 2 == 1){
        cout<<-1 <<endl;
        continue;
       }

       //int total_one = n - total_two;

      //  if(total_one == n){
      //   cout<<1 <<endl;
      //   continue;
      //  }

       int left = 0;
       int right = total_two;
       int k = 0;

       //edge cases if size odd and and count of two also odd

       if(n % 2 == 1 && total_two % 2 == 1){
        cout<<-1 <<endl;
        continue;
       }

       for(int i = 0; i<n; i++){

        if(arr[i] == 1) k++;
        else if(arr[i] == 2){
          left++;
          right--;
          k++;
        }

        if(left == right) break;
       }
       cout<<k <<endl;
    }

    return 0;
}