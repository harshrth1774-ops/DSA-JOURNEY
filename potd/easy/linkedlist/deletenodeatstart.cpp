#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

Node* createLL(int arr[], int idx, int size){
  if(idx == size) return NULL;

  Node* temp =  new Node(arr[idx]);
  temp->next = createLL(arr,idx+1,size);
  return temp;

}
int main()  
{
  Node* Head;
  Head = NULL;
  int arr[] = {2,4,6,8,10};
  Head = createLL(arr,0,5);

  //delete a node at start;
  if(Head != NULL)
  {
    Node* temp = Head;
        Head = Head->next;
  delete temp;
  }

  //delete a node at end
  if(Head != NULL){
    //only single node is present 
    if(Head->next == NULL){
      delete Head;
      Head = NULL;  
    }
    else{
      Node* prev = NULL;
      Node* curr = Head;
      while(curr->next!= NULL){
        prev = curr;
        curr = curr->next;
      }
      prev->next = NULL;
        delete curr;
    }
  }
  
  Node* print = Head;
  while(print!=NULL){
    cout<<print->data <<" ";
    print = print->next;
  }
  

}