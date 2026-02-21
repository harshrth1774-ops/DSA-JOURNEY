/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root, bool &ans){
        
        if(root == NULL) return 0;
        
        int left  = height(root->left,  ans);
        int right = height(root->right, ans);
        
        int diff = left - right;
        
        if(diff < -1 || diff > 1) ans = false;
        
        return 1 + max(left,right);
        
    }
    bool isBalanced(Node* root) {
        // code here
        bool ans = true;
        
       height(root,ans);
       
       return ans;
        
    
    }
};