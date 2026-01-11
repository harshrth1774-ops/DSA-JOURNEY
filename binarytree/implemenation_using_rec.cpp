#include<iostream>
using namespace std;

//creating node class

class Node
{
  public:
  int data;
  Node* left;
  Node* right;

  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

//implementing binary tree using recursion
  Node* binaryTree()
  {
    int x;
    cin>>x;

    if(x == -1) return NULL;
    Node* temp = new Node(x);

    //left side
    cout<<"ENTER LEFT CHILD "<<x<<" ";
    temp->left = binaryTree();
    //right side
     cout<<"ENTER RIGHT CHILD "<<x<<" ";
    temp->right = binaryTree();

    return temp;
  }

int main()
{
  cout<<"enter the root node: ";
  Node* root;
  root = binaryTree();
  binaryTree();

}
