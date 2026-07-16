/*
Sequential Digits
brute force - tle
*/
class Solution {
public:
    bool fun(int num){

        string s = to_string(num);
        bool isright = true;

        for(int i = s.size()-1; i>=1; i--){

            if((s[i] - '0') - (s[i-1] - '0') != 1){
               isright  = false;
                break;
            }
        }
        return isright;
    }
    vector<int> sequentialDigits(int low, int high) {
        
        vector<int>res;
       // bool isright = true;
        for(long long i = low ; i <= high; i++){

            bool ans = fun(i);

            if(ans ==  true){
                res.push_back(i);
            }
        }
        return res;
    }
};

