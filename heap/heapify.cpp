#include <bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr, int n, int idx){

  int largest = idx;
  int left = 2*idx+1;
  int right = 2*idx+2;

  if(left < n && arr[largest] < arr[left]){
    largest = left;
  }
  if(right < n && arr[largest] < arr[right]){
    largest = right;
  }

  if(largest != idx){
  swap(arr[largest],arr[idx]);
  heapify(arr,n,largest);
    
  }
}

int main(){

  vector<int>arr = {14,15,12,24,30,20,18,22,23,17,19};
  int n = arr.size();

  for(int i = n/2-1; i>=0; i--){
  heapify(arr,n,i);
  }
