#include <bits/stdc++.h>
using namespace std;

class Node{
  public:

  int data;
  Node* left, *right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};

 Node* binarytree(){

  int x; 
  cin>>x;
  
  if(x == -1){
    return NULL;
  }
  Node* temp = new Node(x);

  temp->left = binarytree();
  temp->right = binarytree();

  return temp; 
}
int main(){

}