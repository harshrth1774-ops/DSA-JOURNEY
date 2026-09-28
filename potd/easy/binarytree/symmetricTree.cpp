class Solution {
public:
    bool fun(TreeNode* l, TreeNode* r)
    {
        if(l == NULL && r == NULL) return true;
        if(l == NULL || r == NULL) return false;

        return (l->val == r->val) 
            && fun(l->left, r->right) 
            && fun(l->right, r->left);
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        return fun(root->left, root->right);
    }
};
