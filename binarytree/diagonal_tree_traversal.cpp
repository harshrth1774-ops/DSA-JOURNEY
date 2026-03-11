/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
  public:
    void find(Node* root, int &left, int pos){
        
        if(root == NULL) return;
        
        left = max(pos,left);
        
        find(root->left, left, pos+1);
        find(root->right, left, pos);
    }
    
    void fun(Node* root, vector<vector<int>>&leftarr, int pos){
        
        if(root == NULL) return;
        
        leftarr[pos].push_back(root->data);
        
        fun(root->left, leftarr,pos + 1);
        fun(root->right, leftarr, pos);
    }
    vector<int> diagonal(Node *root) {
        // code here
        int left = 0;
        find(root,left,0);
        vector<vector<int>>leftarr(left+1);
        
        fun(root, leftarr, 0);
        vector<int>arr;
        for(int i = 0; i<leftarr.size(); i++){
            
            for(int j = 0; j<leftarr[i].size(); j++){
             
             arr.push_back(leftarr[i][j]);   
            }
        }
        return arr;
        
    }
};

/* time complexity - O(n) and space comp is O(n)*/