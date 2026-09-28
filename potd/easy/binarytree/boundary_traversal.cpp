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
    void leftsub(Node* root, vector<int>& ans){
        
        if(root == NULL) return;
        if(root->left == NULL && root->right == NULL) return;
        
        ans.push_back(root->data);
        if(root->left) 
        leftsub(root->left,ans);
        
       else 
        leftsub(root->right,ans);
    }
    
    void leafNodes(Node* root, vector<int>& ans){
        
        if(root == NULL) return;
        
        if(root->left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        
        leafNodes(root->left,ans);
        leafNodes(root->right,ans);
    }
    
    void rightsub(Node* root, vector<int>& ans){
        
        if(root == NULL) return;
        
        if(root->left == NULL && root->right == NULL) return;
        
        if(root->right)
        rightsub(root->right,ans);
        
        else
        rightsub(root->left,ans);
        
        ans.push_back(root->data);
        
    }
    vector<int> boundaryTraversal(Node *root) {
        
        vector<int>ans;
        ans.push_back(root->data);
        //left subtree
        
        leftsub(root->left, ans);
        
        if(root->left || root->right) 
        //leaf nodes
        leafNodes(root,ans);
        
        //right subtree
        rightsub(root->right, ans);
        
        return ans;
    }
};