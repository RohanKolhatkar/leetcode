class Solution {
public:
    const int M = 1e9 + 7;
    long long dp[33][1010];
    int numRollsToTarget(int n, int k, int target) {
        dp[0][0] = 1;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= k; j++) {
                for (int s = target; s >= j; --s) {
                    dp[i][s] = (dp[i][s] + dp[i - 1][s - j]) % M;
                }
            }
        }
        return dp[n][target];
    }
};