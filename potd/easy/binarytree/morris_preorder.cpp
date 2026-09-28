/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int>ans;
        
        while(root){
            
            if(root->left == NULL){
                ans.push_back(root->data);
                root = root->right;
            }
            else{
                
               // ans.push_back(root->data);
                Node* curr = root->left;
                
                while(curr->right != NULL && curr->right != root){
                    curr = curr->right;
                }
                
                if(curr->right == NULL){
                    
                    curr->right = root;
                    ans.push_back(root->data);
                    root = root->left;
                }else{
                    curr->right = NULL;
                    root = root->right;
                }
                
               
                
            }
        }
        return ans;
    }
};