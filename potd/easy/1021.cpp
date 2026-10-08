class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int cnt = 0;
        string ans = "";
        for(char ch : s){

            if(ch == '('){
                cnt++;
                
                if(cnt > 1){
                    ans.push_back(ch);
                }
            }else{

                cnt--;
                if(cnt  == 0) continue;
                else{
                    ans.push_back(ch);
                }
            }
        }
        return ans;
    }
};