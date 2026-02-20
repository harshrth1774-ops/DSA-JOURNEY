/* using an extra varible*/
/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    void fun(Node* root, int &ans)
    {
        if(root == NULL) return;
        
        if(root->left != NULL || root->right != NULL) ans++;
        
        fun(root->left,ans);
        fun(root->right,ans);
    }
    int countNonLeafNodes(Node* root) {
        // Code here
        int ans = 0;
        
        fun(root,ans);
        
        return ans;
    }
};



/* without using an extra varibale*/
/*Structure of the node of the tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/
// you are required to complete this function
// the function should return the count of Non-Leaf Nodes
class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        // Code here
        if(root == NULL) return 0;
        
        if(root->left == NULL && root->right == NULL) return 0;
        
        return (1 + countNonLeafNodes(root->left) + countNonLeafNodes(root->right));
    }
};
