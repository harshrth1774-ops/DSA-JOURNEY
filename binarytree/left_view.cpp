/* method - 1 */
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        queue<Node*>q;
        q.push(root);
        
        vector<int>ans;
        
        while(!q.empty()){
            int size = q.size();
            bool pushed = 0;
            
            for(int i = 0; i<size; i++){
                
                Node* temp = q.front();
                q.pop();
                
                if(pushed == true){
                    
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                    continue;
                }
                ans.push_back(temp->data);
                pushed = true;
                
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        return ans;
    }
};

/* usimg recursion*/
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void lView(Node* root, int level, vector<int>& ans){
        if(root == NULL) return;
        
        if(level == ans.size()){
            ans.push_back(root->data);
        }
        lView(root->left, level+1, ans);
        lView(root->right, level+1, ans);
    }
    vector<int> leftView(Node *root) {
        // code here
        int level = 0;
        vector<int>ans;
        lView(root,level,ans);
        
        return ans;
    }
};