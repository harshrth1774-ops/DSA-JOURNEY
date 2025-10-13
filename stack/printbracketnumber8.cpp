#include<iostream>
#include<vector>
#include<stack>
using namespace std;
// User function template for C++
class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        vector<int>ans;   //vector jisme ans return hoga
        stack<int>s;      //main stack mai open brackets ka symbol ka store karane ki wajah uske count ko store kiya hai and bo open brackets ko count karta hua jayega and jaise hi uska close braket milta hai bo ans vector mai pehele apne top ka number print karayega and uske pass pop ho jayega  
        int count = 0;
        for(char &ch: str)
        {
            if(ch == '('){
                count++;      
                s.push(count);
                ans.push_back(count);
            }else if(ch == ')'){      
                ans.push_back(s.top());
                s.pop();
            }else{
                continue;
            }
        }
        return ans;
    }
};