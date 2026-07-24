class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        
        int i = 1;
        long long sumodd = 0, sumeven = 0;
        while(n--){

            if(i % 2  == 0){ //even

            sumeven += i;
            }else{

                sumodd += i;
            }
        }
        return gcd(sumeven,sumodd);
    }
};