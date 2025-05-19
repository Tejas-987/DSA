class Solution {
public:
    int minDistance(string w1, string w2) {
        int n = w1.size(), m = w2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        // Base cases: Transforming empty string to another
        for (int i = 1; i <= n; i++) dp[i][0] = i; // Delete all chars in w1
        for (int j = 1; j <= m; j++) dp[0][j] = j; // Insert all chars in w2

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (w1[i - 1] == w2[j - 1]) { // If characters match, no operation needed
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = min({
                        dp[i - 1][j] + 1,  // Delete
                        dp[i][j - 1] + 1,  // Insert
                        dp[i - 1][j - 1] + 1 // Replace (Fixed missing +1)
                    });
                }
            }
        }
        return dp[n][m];
    }
};
