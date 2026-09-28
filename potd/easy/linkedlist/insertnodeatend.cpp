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
Node* CreateLinkeList(int arr[], int idx, int size, Node* prev)
{
  if(idx == size) return prev;

  Node* temp;
  temp = new Node(arr[idx]);
  temp->next = prev;

  return CreateLinkeList(arr,idx+1,size,temp);
}
int main()
{
  Node* Head;
  Head = NULL;
  int arr[] = {2,4,6,8};
  Head = CreateLinkeList(arr,0,4,Head); 

}