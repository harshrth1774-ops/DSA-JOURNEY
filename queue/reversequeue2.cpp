class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        stack<int>st;
        int n = q.size();
        while(n--)
        {
            st.push(q.front());
            q.pop();
        }
        while(!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
    }
};