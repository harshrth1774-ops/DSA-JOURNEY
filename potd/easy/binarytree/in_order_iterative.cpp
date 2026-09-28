// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int>ans;
        stack<Node*>s;
        stack<bool>times;
        
        s.push(root);
        times.push(0);
        while(!s.empty()){
            
            Node* curr = s.top();
            s.pop();
            int temp = times.top();
            times.pop();
            
            if(temp == 0){
                if(curr->right){
                    s.push(curr->right);
                    times.push(0);
                }
                
               s.push(curr);
               times.push(1);
                
                if(curr->left){
                    s.push(curr->left);
                    times.push(0);
                }
            }else{
                ans.push_back(curr->data); 
            }
        }
        return ans;
    }
};