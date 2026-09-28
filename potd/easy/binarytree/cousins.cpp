/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n = q.size();
            bool isXexist = false;
            bool isYexist = false;

            for(int i = 0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();

            //checking if this node value is equal to any x and y
            if(temp->val == x) isXexist = true;
            if(temp->val == y) isYexist = true;

            //checking parent node condition
            if(temp->left != NULL && temp->right != NULL){

                if(temp->left->val == x && temp->right->val == y) return false;

                if(temp->left->val == y && temp->right->val == x) return false;
            }
            if(temp->left != NULL) q.push(temp->left);
            if(temp->right != NULL) q.push(temp->right);
            }
            if(isXexist && isYexist) return true;
        }
        return false;
    }
};