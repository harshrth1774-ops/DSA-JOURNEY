/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    int burn(Node*root, int target, int &timer){
        
        if(root == NULL) return 0;
        
        if(root->data == target){ //aag vaha se pheli hai
            return -1;
        }
        
        int left = burn(root->left,target, timer);
        int right = burn(root->right,target, timer);
        
        if(left < 0){
            int val = abs(left) + right;
            timer = max(timer,val);
            
            return left-1;
        }
        if(right < 0){
            int val = abs(right) + left;
            timer = max(timer,val);
            return right-1;
        }
        
        return 1 + max(left,right);
    }
    
    void find(Node* root, int target, Node* &add){
        
        if(root ==  NULL) return;
        
        if(root->data == target){
            add = root;
            return;
        }
        
        find(root->left,target, add);
        find(root->right,target, add);
    }
    
    int height(Node* root){
        
        if(root == NULL) return 0;
        
        return 1 + max(height(root->left),height(root->right));
    }
    int minTime(Node* root, int target) {
        // code here
        int timer = 0;
        burn(root,target,timer);
        
        Node* add = NULL;
        find(root,target,add);
        
        int h = height(add)-1;
        
        return max(timer,h);
        
    }
};