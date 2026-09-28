#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(int value){
    data = value;
    next = NULL;
  }
};
//creating a function 
Node* createLL(int arr[], int idx, int size){
  //base case
  if(idx == size) return NULL;

  Node* temp;
  temp = new Node(arr[idx]);

  temp->next = createLL(arr,idx+1, size);
  return temp;
  
}
int main()
{
  int arr[] = {2,4,6,8,10};
  int idx = 0;
  int size = 5;

  Node* head = NULL;
    head = createLL(arr,0,5);
    //printing
    Node* temp = head;
    while(temp!=NULL){
      cout<<temp->data <<" ";
      temp = temp->next;
    }
}