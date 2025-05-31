class Solution {
public:
    int rec(int r, int c, vector<vector<int>>& obstacleGrid, int m, int n, vector<vector<int>>& dp) {
        if (r == m && c == n) return 1;
        if (r > m || c > n || obstacleGrid[r][c] == 1) return 0;
        if (dp[r][c] != -1) return dp[r][c];
        return dp[r][c] = rec(r, c + 1, obstacleGrid, m, n, dp) + rec(r + 1, c, obstacleGrid, m, n, dp);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        if (obstacleGrid[m - 1][n - 1] == 1) return 0;
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return rec(0, 0, obstacleGrid, m - 1, n - 1, dp);
    }
};