#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int val)
  {
    data = val;
    next = NULL;
  }
};
//create a LL
Node* createLL(int arr[], int size)
{
  Node* Head = NULL;
  Node* Tail= NULL;
  for(int i=0; i<size; i++){
    if(Head == NULL) 
    {
      Head = new Node(arr[i]);
      Tail = Head;
    }else{
      Tail->next = new Node(arr[i]);
      Tail = Tail->next; 
    }
  }
  return Head;
}
int main()
{
  int arr[] ={2,3,4,4,5};
  Node* head = NULL;
  
  int pos = 2;
  int val = 50;
  Node* prev = head;
  pos--;
  while(pos--){
    prev = prev->next;
  }
  Node* temp = new Node(val);
  temp->next = prev->next;
  prev->next = temp; 

}