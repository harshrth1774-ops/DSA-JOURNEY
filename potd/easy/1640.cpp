class Solution {
public:
    int maxDepth(string s) {
        
        stack<char>st;
        int maxi = INT_MIN;

        for(char ch : s){

            if(ch == '('){
                st.push(ch);
                maxi = max(maxi, (int)st.size());
            }
            else if(ch == ')'){
                st.pop();
            }
        }
        if(maxi == INT_MIN) return 0;

        return maxi;
    }
};