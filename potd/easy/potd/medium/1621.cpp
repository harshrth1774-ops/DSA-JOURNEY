class Solution {
public:
    int M = 1e9 + 7;
    int t[1001][1001];

    int fun(int n, int k, int i){

        if(k == 0) return 1;

        if(i >= n) return 0;

        if(t[i][k] != -1) return t[i][k];

        long long take = 0;
        for(int j = i+1; j<=n-1; j++){

            take =  (take +  fun(n, k-1, j)) % M;
        }

        long long skip = fun(n, k, i+1) % M;

        return t[i][k] = (take + skip) % M;
    }
    int numberOfSets(int n, int k) {
        
        memset(t,-1,sizeof(t));
        return fun(n, k, 0) % M;
    }
};