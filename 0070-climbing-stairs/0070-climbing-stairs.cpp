class Solution {
public:
    vector<int> dp;

    int climbStairs(int n) {
        dp.resize(n + 1, -1);  // Resize and initialize dp array
        return helper(n);
    }

    int helper(int n) {
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        if (dp[n] != -1) return dp[n];

        return dp[n] = helper(n - 1) + helper(n - 2);
    }
};
