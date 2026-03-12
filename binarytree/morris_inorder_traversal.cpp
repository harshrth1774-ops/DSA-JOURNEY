// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        
        while(root){
            
            if(root->left == NULL){
                ans.push_back(root->data);
                root = root->right;
            }
            else{
                
                Node* curr = root->left;
                
                while(curr->right != NULL && curr->right != root){
                    curr = curr->right;
                }
                
                //not traverse curr->right == NULL
                if(curr->right == NULL){
                    curr->right = root;
                    root = root->left;
                }else{ //traversed means linekd or loop is there
                    curr->right = NULL;
                    ans.push_back(root->data);
                    root = root->right;
                }
            }
        }
        return ans;
    }
};