// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
        vector<int>ans;
        stack<Node*>s;
        
        s.push(node);
        
        while(!s.empty()){
            
            Node* temp = s.top();
            s.pop();
            
            ans.push_back(temp->data);
            
            if(temp->left) s.push(temp->left);
            if(temp->right) s.push(temp->right);
        }
        reverse(begin(ans),end(ans));
        
        return ans;
    }
};