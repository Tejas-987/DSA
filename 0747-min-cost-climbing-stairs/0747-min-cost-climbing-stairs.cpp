class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n + 1, 0); // DP array to store min cost to reach the top

        // Base cases
        dp[n] = 0;   // No cost to stay at the top
        dp[n - 1] = cost[n - 1]; // Last step costs itself

        for (int i = n - 2; i >= 0; i--) {
            dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
        }

        return min(dp[0], dp[1]); // Start from either step 0 or 1
    }
};
