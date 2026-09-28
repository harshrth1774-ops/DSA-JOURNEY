// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        
        vector<int>ans;
        while(root){
            
            if(root->right == NULL){
                ans.push_back(root->data);
                root = root->left;
            }
            else{
                
                Node* curr = root->right;
                
                while(curr->left != NULL && curr->left != root){
                    curr = curr->left;
                }
                
                if(curr->left == NULL){
                    curr->left = root;
                    ans.push_back(root->data);
                    root = root->right;
                    
                }else{
                    
                    curr->left = NULL;
                    root = root->left;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};