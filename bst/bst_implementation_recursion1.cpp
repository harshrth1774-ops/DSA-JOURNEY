#include<iostream>
#include<algorithm>
using namespace std;

class Node{
  public:

  int data;
  Node* right;
  Node* left;

  Node(int val)
  {
    data = val;
    right = left = NULL;
  }
};

Node* insert(Node* root, int val)
{
  if(root == NULL){
    Node* temp = new Node(val);
    return temp;
  }
  if(val < root->data){
    root->left = insert(root->left, val);
  }else{
    root->right = insert(root->right, val);
  }

  return root;
}

void inOrder(Node* root)
{
  if(root == NULL) return;
  //left
  inOrder(root->left);
  //node
  cout<<root->data <<" ";
  //right
  inOrder(root->right);
}
int main()
{
  int arr[] = {3,7,4,1,6,8};
  
  Node* root = NULL;

  for(int i = 0; i<6; i++)
  {
    root = insert(root,arr[i]);
  }

  inOrder(root);
}