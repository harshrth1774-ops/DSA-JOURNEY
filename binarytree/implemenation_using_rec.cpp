#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* left, *right;
  int data;

  Node(int val){
    data = val;
    left  = right = NULL;
  }
};

Node* binaryTree()
{
  int x; cin>>x;

  if(x == -1) return  NULL;

  Node* temp = new Node(x);
  
  temp->left = binaryTree();
  temp->right = binaryTree();

  return temp;
}