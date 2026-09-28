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
     void fun(TreeNode* root, int &sum)
     {
        if(root == NULL) return;

        //leaf par aate hai ab
        if(root->left != NULL && root->left->left == NULL && root->left->right == NULL) 
        sum += root->left->val;

        fun(root->left,sum);
        fun(root->right,sum); 
     }
    int sumOfLeftLeaves(TreeNode* root) {
        
        int sum = 0;
        fun(root,sum);
        return sum;
    }
};