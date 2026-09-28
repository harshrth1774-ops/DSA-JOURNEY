class Solution {
public:
    long long sumAndMultiply(int n) {
        
        long long num = 0;
        long long i = 1;
        long long sum = 0;
        
        while(n > 0){

            long long ld = n % 10;

            if(ld != 0){

                sum += ld;
                num = num + (i * ld);
                i = i * 10;
            }
            n = n / 10; 
        }
        return (num * sum);
    }
};