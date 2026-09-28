#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string str) {
        stack<char>s;
        for(char &ch: str)
        {
            //ya toh ( ye hoga
            if(ch == '('){
                s.push(ch);
            }else{      //')'
                if((s.size() > 0) && (s.top() == '('))
                s.pop();
                else
                s.push(ch);
            }

        }
        return s.size();
    }
};