#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int>s;      //for knowing the neighbour
        for(int i=0; i<arr.size(); i++)
        {
            if(s.empty()){      //agar stack khali hua toh value dal do as it is
                s.push(arr[i]);
            }else if(arr[i]>=0){            //array ki value +ve hui
                if(s.top()>=0){         //stack ki top value +ve hui(possible)
                    s.push(arr[i]);
                }else{                 //stack ki top value -ve hui(notpossible)
                    s.pop();
                }
            }else{               //arr ki value neg hui 
                if(s.top()<0){          //stack ki top value -ve hui(possible)
                    s.push(arr[i]);
                if(s.top()<0){        //stack ki top value -ve hui(notpossible)
                }else{                   
                    s.pop();
                }
            }
        }
        vector<int>ans(s.size());
        int i = s.size()-1;
        while(i>=0)
        {
            ans[i]=s.top();
            i--;
            s.pop();
        }
        return ans;
        
    }
}
}