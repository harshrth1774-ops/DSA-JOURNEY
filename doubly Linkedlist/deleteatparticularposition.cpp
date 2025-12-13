#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* prev = NULL;
  Node* next = NULL;

  Node(int val){
    data = val;
  }
};

int main()
{
  Node* head = new Node(10);
  Node* second = new Node(20);
  Node* third = new Node(30);
  Node* fourth = new Node(40);

  head->next = second;

  second->prev = head;
  second->next = third;

  third->prev = second;
  third->next = fourth;

  fourth->prev = third;

  int pos;
  cin >> pos;

  if(pos == 1){
    if(head->next == NULL){
      delete head;
      head = NULL; 
    }else{
      Node* temp = head;
      head = head->next;
      head->prev = NULL;
      delete temp;
    }
  }
  else{
    Node* current = head;
    int k = pos;

    while(--k){
      current = current->next;
    }

    if(current->next == NULL){
      current->prev->next = NULL;
      delete current;
    }else{
      current->prev->next = current->next;
      current->next->prev = current->prev;
      delete current;
    }
  }
}
