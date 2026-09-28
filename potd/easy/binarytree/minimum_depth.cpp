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
    void fun(TreeNode* root, vector<int>&ans, int count)
    {
        if(root == NULL) return;

        count++;

        if(root->left == NULL && root->right == NULL){
            ans.push_back(count);
            return;
        }

        fun(root->right,ans,count);
        fun(root->left,ans,count);
    }
    int minDepth(TreeNode* root) {
        if(root == NULL) return  0;
        vector<int>ans;
        fun(root,ans,0);
        
        int mini = ans[0];
        for(int i = 1; i<ans.size(); i++)
        {
            if(ans[i] < mini)
            {
                mini = ans[i];
            }
        }

        return mini;
    }
};