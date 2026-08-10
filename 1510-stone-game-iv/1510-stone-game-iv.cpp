class Solution {
public:
    bool winnerSquareGame(int n) {
        // not solved by me 
        vector<bool> dp(n + 1, false);

        dp[0] = false;

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j * j <= i; ++j) {
                if (!dp[i - j * j]) {
                    dp[i] = true;

                    break;
                }
            }
        }

        return dp[n];
    }
};