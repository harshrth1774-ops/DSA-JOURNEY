#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    
    int data;
    Node* left, *right;
    int val;

    Node(int val){
        data = val;
        left = right = NULL;
    }
}
int main(){
    
    int x; cin>>x;

    Node* root = new Node(x);
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){

        Node* temp = q.front();
            q.pop();

            int first; cin>>first;

            if(first != -1){
                temp->left = new Node(first);
                q.push(temp->left);
            }
            
            int second; cin>>second;

            if(second != -1){
                temp->right = new Node(second);
                q.push(temp->right);
            }
    }
}