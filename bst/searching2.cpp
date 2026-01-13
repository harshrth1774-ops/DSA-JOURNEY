#include<iostream>
using namespace std;
class Node{
  public:

  int data;
  Node* right;
  Node* left;

  Node(int val)
  {
    data = val;
    right = NULL;
    left = NULL;
  }
};

Node* insert(Node* root, int val)
{
  if(root == NULL){
    Node* temp = new Node(val);
    return temp;
  }
  

  if(val < root->data){
    root->left = insert(root->left,val);
  }else{
    root->right = insert(root->right,val);
  }

  return root;
}

bool search(Node* root, int target)
{
  if(root == NULL) return 0;

  if(target == root->data) return 1;

  if(target < root->data){
    search(root->left,target);
  }else{
    search(root->right, target);
  }
}
int main()
{
  int arr[] = {50,28,5,34,13};
  
  Node* root = NULL;

  for(int i = 0; i<5; i++){
   root =  insert(root,arr[i]);
  }

  int target;
  cout<<"enter the target: ";
  cin>>target;

  cout<<search(root, target);
}