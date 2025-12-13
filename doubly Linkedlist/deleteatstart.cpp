#include<iostream>
using namespace std;

class Node {
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

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->prev = head;
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    if(head != NULL){
      //if single node exist
      if(head->next == NULL){
        delete head;
        head = NULL;
        //more than one node
      }else{
        Node* temp = head;
        head = head->next;
        delete temp;
        head->prev = NULL;
      }
    }

   //deleltion at end
   if(head != NULL){
    if(head->next == NULL){
      delete head;
      head = NULL;
    }else{
      Node* temp = head;
      while(temp->next){
        temp =  temp->next;
      }
      temp->prev->next = NULL;
      delete temp;
    }
   }
    Node* print = head;
    while(print){
      cout<<print->data <<" ";
      print = print->next;
    }

    return 0;
}
