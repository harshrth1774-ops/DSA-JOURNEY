#include<iostream>
using namespace std;
class Node{
  public:

  int data;
  Node* left,*right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};

Node* fun(){
 int x; cin>>x;

 if(x == -1) return NULL;

 Node* temp = new Node(x);v
 temp->left = fun();
 temp->right = fun();

 return temp;
  
}
int main()
{
  int x;
  Node* root = new Node(x);
}