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
     void sum(TreeNode* root, long long  &total, long long add)
     {
        if(root == NULL) return;

        add = add * 10 + (root->val);

        if(root->left == NULL && root->right == NULL) {
            total += add;
            return;
        }
        sum(root->left, total, add);
        sum(root->right, total, add);

     }
    int sumNumbers(TreeNode* root) {
        
        long long add = 0;
        long long total = 0;
        sum(root,total, add);

        return total;
    }
};