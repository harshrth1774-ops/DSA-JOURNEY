#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* prev = NULL;
  Node* next = NULL;

  Node(int val){
    data = val;
    prev = next = NULL;
  }
};
int main()
{
  Node* head = NULL;
  //insertion at start

  if(head == NULL){
    head = new Node(5);
  }else{
    Node* temp = new Node(5);
    temp->next = head;
    head->prev = temp;
    head = temp;
  }

  //insertion at end
  Node* temp2 = new Node(10);
  if(head == NULL){
    head = temp2;
  }else{
    Node* current = head;
  while(current->next!=NULL){
    current = current->next;
  }
  Node* temp2 = new Node(10);
  temp2->prev = current;
  current->next = temp2; 
  }
  
}