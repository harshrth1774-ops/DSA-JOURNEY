#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;

  Node(int val)
  {
    data = val;
  }
};
int main()
{
  // single node
  if(head->next == NULL){
    delete head;
    head=NULL;
  }else{
    Node* prev =NULL;
    Node* current = head;
    while(current->next != NULL){
      prev=current;
      current = current->next;
    }
    delete current;
    prev->next = NULL;
  }
}