/*
  APPROACH-1 TC = O(n+m) * log(n+m)
  
*/

/* APPROACH-2 TC = O(N+M)
*/
#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>&ans, int idx, int n){

  int largest = idx;
  int left = 2 * idx + 1;
  int right = 2* idx + 2;

  if(left < n && ans[largest] < ans[left]){
    largest = left;
  }

  if(right < n && ans[largest] < ans[right]){
    largest = right;
  }

  if(largest != idx){
    swap(ans[idx], ans[largest]);
    heapify(ans, largest,n);
  }

}
int main(){

  vector<int>arr1 = {10,5,6,2};
  vector<int>arr2 = {12,7,9};

  vector<int>ans;
  for(int i = 0; i<arr1.size(); i++)
  ans.push_back(arr1[i]);

   for(int i = 0; i<arr2.size(); i++)
   ans.push_back(arr2[i]);

   int n = ans.size();
   for(int i = n/2-1; i>=0; i--){

    heapify(ans,i,n);
   }

   for(int i = 0; i<n; i++){
    cout<<ans[i] <<" ";
   }
    return 0;
}


