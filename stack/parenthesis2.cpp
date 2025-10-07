#include<iostream>
#include<stack>
using namespace std;
class Solution {
public:
    bool isValid(string str) {
        stack<char>s;
        for(char &ch: str)
        {
            if(ch == '(')
            {
                s.push(ch);
            }
            else if(ch == ')')
            {
                if(s.size()>0  && s.top() == '(')
                s.pop();
                else 
                s.push(ch);
            }
            else if(ch == '{')
            {
                s.push(ch);
            }
            else if(ch == '}')
            {
                if(s.size()>0 && s.top() == '{')
                s.pop();
                else
                s.push(ch);
            }
            else if(ch == '[')
            {
                s.push(ch);
            }
            else if(ch == ']')
            {
                if( s.size()>0  && s.top() == '[')
                s.pop();
                else
                s.push(ch);
            }
        }
        if(s.size() == 0) return true;
        else return false;
    }
};