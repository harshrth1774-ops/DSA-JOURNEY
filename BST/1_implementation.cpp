#include <bits/stdc++.h>
using namespace std;

class Node{
  public:

  int data;
  Node* left,*right;

  Node(int val){
    data =  val;
    left = right = NULL;
  }
};

Node* insert(Node* root, int val){

  if(root == NULL){

    Node* temp = new Node(val);
    return temp;
  }

  if(val < root->data){ //left
    root->left = insert(root->left,val);

  }else{   //right
    root->right = insert(root->right,val);
  }

  return root;
}

 void inorder(Node* root){

  if(!root) return;

  inorder(root->left);
  cout<<root->data <<" ";
  inorder(root->right);

 }
int main(){
    
  vector<int>arr = {2,3,4,52,2,8,5};

  Node* root = NULL;
  for(int i = 0; i<arr.size(); i++){

   root =  insert(root,arr[i]);
  }
    

  //inorder
  inorder(root);

    return 0;
}