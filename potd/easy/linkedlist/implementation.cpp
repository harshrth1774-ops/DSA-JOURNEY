#include<iostream>
using namespace std;

// creating a class Node
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
int main()
{
  //creating a node by 2 differnet method
  //1. in a static way
 // Node A1(4);
  //A1.next = NULL;

  // ------------------------------------------------------------------------------------------------>
  
  //2. dynamically
  Node* Head;         //this is the pointer variable which will store the address of node which going to make now
  Head = new Node(28);    // a node is created and returing me a address which is going to store in Head

  cout<< Head->data <<endl;  
  cout<< Head->next <<endl;  
  return  0;
}