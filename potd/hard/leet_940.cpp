class Solution {
public:
    int dp[2001];
    int M = 1e9 + 7;

    int solve(int n, vector<int>& prev) {

        if (n == 0) return 1;

        if (dp[n] != -1) {
            return dp[n];
        }

        long long total = (2LL * solve(n - 1, prev)) % M;

        if (prev[n] != 0) {
            int duplicates = solve(prev[n] - 1, prev);

            total = (total - duplicates + M) % M;
        }

        return dp[n] = total;
    }

    int distinctSubseqII(string s) {

        int n = s.size();

        memset(dp, -1, sizeof(dp));

        vector<int> prev(n + 1, 0);
        unordered_map<char, int> lastseen;

        for (int i = 1; i <= n; i++) {

            char ch = s[i - 1];

            prev[i] = lastseen[ch];

            lastseen[ch] = i;
        }

        return (solve(n, prev) - 1 + M) % M;
    }
};