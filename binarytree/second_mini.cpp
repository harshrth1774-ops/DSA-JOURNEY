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
    void fun(TreeNode* root, vector<int>& ans)
    {
        if(!root){
            return;
        }
        ans.push_back(root->val);
        fun(root->left,ans);
        fun(root->right,ans);
    }
    int findSecondMinimumValue(TreeNode* root) {
        vector<int>ans;
        fun(root,ans);

        int mini = root->val;
        long secondmini = LONG_MAX;

        for(int x : ans){
            if(x > mini && x < secondmini)
            {
                secondmini = x;
            }
        }

        if(secondmini == LONG_MAX){
            return -1;
        }
        return secondmini;
    }
};