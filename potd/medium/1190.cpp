//tc = O(n^2)
//sc = O(n)
class Solution {
public:
    string reverseParentheses(string s) {
        
        int n = s.size();
        vector<int>info;
        string res = "";

        for(char ch : s){

            if(ch == '('){
                info.push_back(res.size());
            }
            else if(isalpha(ch)){
                res.push_back(ch);
            }
            else if(ch == ')'){
                reverse(res.begin() + info.back(), res.end());
                info.pop_back();
            }
        }
        return res;
    }
};