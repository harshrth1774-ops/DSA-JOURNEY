#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr, int idx, int n){

  int largest = idx;
  int left = 2 * idx + 1;
  int right = 2 * idx + 2;

  if(left < n && arr[largest] < arr[left]){
    largest = left;
  }

  if(right < n && arr[largest] < arr[right]){
    largest = right;
  }

  if(largest != idx){
    swap(arr[idx], arr[largest]);
    heapify(arr, largest, n);
  }
}

void sortarr(vector<int>&arr, int n){

  for(int i = n/2 - 1; i >= 0; i--){
    heapify(arr, i, n);
  }

  for(int i = n-1; i >= 0; i--){
    swap(arr[0], arr[i]);
    heapify(arr, 0, i);
  }
}

int main(){
    
  vector<int>arr = {30,24,20,23,19,12,18,22,14,17,15};
  int n = arr.size();

  sortarr(arr, n);

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }

  return 0;
}