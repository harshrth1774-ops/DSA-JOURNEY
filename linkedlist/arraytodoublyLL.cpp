#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* prev;
  Node* next;

  Node(int val){
    data = val;
    prev = NULL;
    next = NULL;
  }
};
Node* creatDl(int arr[], int idx, int size, Node* back){
  //base case
  if(idx ==  size) return NULL;

  Node* temp = new Node(arr[idx]);
  temp->prev = back; 
  temp->next = creatDl(arr,idx+1,size,temp);

  return temp;

}
int main()
{
  int arr[] ={1,2,3,4,5};
  int n = 5;

  Node* head = NULL;
  head = creatDl(arr,0,5,NULL);

  
  Node* print = head;
  while(print){
    cout<<print->data <<" ";
    print = print->next;
  }
}