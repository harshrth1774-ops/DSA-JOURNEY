class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        queue<int>q;
        for(int i = 1; i<=8; i++){
            q.push(i);
        }

        vector<int>res;
        while(!q.empty()){

            int temp = q.front();
            q.pop();
            if(temp >= low && temp <= high){
                res.push_back(temp);
            }

            int ld = temp % 10;
            int ld1 = ld + 1;
            if(ld1 <= 9){
            int val = temp * 10 + ld1; 
            q.push(val);
        }
        }
        return res;
    }
};