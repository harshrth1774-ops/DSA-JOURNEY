class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        int qsize = q.size();
        if(k > q.size())
        return q;
        
        stack<int>st;
        while(k--)
        {
            st.push(q.front());
            q.pop();
        }
        queue<int>temp;
        while(!st.empty())
        {
            temp.push(st.top());
            st.pop();
        }
        while(!q.empty())
        {
            temp.push(q.front());
            q.pop();
        }
        return temp;
    }
};