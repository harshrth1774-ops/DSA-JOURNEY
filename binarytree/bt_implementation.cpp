#include<iostream>
#include<queue>
using namespace std;
class Node{
  public:

  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = NULL;
    right = NULL;
  }
};
int main()
{
  int first,second;

  int x; cin>>x;

  queue<Node*>q;

  Node* root = new Node(x);
  //put the address of the first or root node in the queue
  q.push(root);

  //start building the binary tree
 
  while(!q.empty()){

    Node* temp = q.front();
    q.pop();

    //left node
    cin>>first;
    if(first != -1){
      temp->left = new Node(first);
      q.push(temp->left);
    }

    //right node
    cin>>second;
    if(second != -1){
      temp->right = new Node(second);
      q.push(temp->right);
    }

  }
}