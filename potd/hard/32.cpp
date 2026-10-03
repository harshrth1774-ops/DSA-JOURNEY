class Solution {
public:
    int longestValidParentheses(string s) {
        
        int res = 0;
        int n = s.size();
        int open = 0, close = 0;

        // left -> right
        for(int i = 0; i < n; i++) {

            if(s[i] == '(') {
                open++;
            } else {
                close++;
            }

            if(close > open) {
                open = 0;
                close = 0;
            }
            else if(open == close) {
                res = max(res, open + close);
            }
        }

        // right -> left
        open = 0;
        close = 0;

        for(int i = n - 1; i >= 0; i--) {

            if(s[i] == '(') {
                open++;
            } else {
                close++;
            }

            if(open > close) {
                open = 0;
                close = 0;
            }
            else if(open == close) {
                res = max(res, open + close);
            }
        }

        return res;
    }
};