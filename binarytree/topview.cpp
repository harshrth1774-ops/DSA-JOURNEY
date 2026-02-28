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



/*method -1 without using recursion  */
//find left most;
//find right most;
// create a ans vector of size right-left+1
// create a visited bool type vector of size right-left+1
//take 2 queue 1.node type 2.int type

class Solution {
  public: 
   void find(Node* root, int &left, int &right, int pos){
       
       if(root == NULL) return;
       
       left = min(pos,left);
       right = max(pos,right);
       
       find(root->left, left, right, pos-1);
       find(root->right, left, right, pos+1);
   }
    vector<int> topView(Node *root) {
        // code here
        int left =  0;
        int right = 0;
        int pos = 0;
        
        find(root, left, right, pos);
        vector<int>ans(right-left+1);
        vector<bool>visited(right-left+1);
        
        queue<Node*>q;
        queue<int>idx;
        
        q.push(root);
        idx.push(-1*left);
        
        while(!q.empty()){
            
            Node* temp = q.front();
            q.pop();
            
            int pos = idx.front();
            idx.pop();
            
            if(visited[pos] == 0){
                visited[pos] = 1;
                ans[pos] = temp->data;
            }
            
            if(temp->left){
                q.push(temp->left);
                idx.push(pos-1);
            }
            if(temp->right){
                q.push(temp->right);
                idx.push(pos+1);
            }
        }
        
        return ans;
    }
};


/*method - 2 using recursion*/
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
    void lrMost(Node* root, int &left, int &right, int pos){
        
        if(root == NULL) return;
        
        left = min(left, pos);
        right = max(right,pos);
        
        lrMost(root->left, left, right, pos-1);
        lrMost(root->right, left, right, pos+1);
    }
    
    void fun(Node* root, vector<int>&ans, vector<int>&level, int l, int pos){
        
        if(root == NULL) return;
        
        if(l < level[pos]){
            ans[pos] = root->data;
            level[pos] = l;
        }
        
        fun(root->left, ans, level, l+1, pos-1);
        fun(root->right, ans, level, l+1, pos+1);
    }
    vector<int> topView(Node *root) {
        // code here
        int left = 0;
        int right = 0;
        int pos = 0;
        int l = 0;
        lrMost(root, left, right, pos);
        
        pos = -1*left;
        vector<int>level(right-left+1,INT_MAX);
        vector<int>ans(right-left+1);
        
        fun(root,ans,level,l,pos);
        return ans;
    }
}; 