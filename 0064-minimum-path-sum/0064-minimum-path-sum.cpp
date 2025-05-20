class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(); // Move n and m inside function
        vector<vector<int>> memm(n, vector<int>(m, -1)); // Memoization table
        return pathSum(0, 0, grid, memm);
    }

    int pathSum(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& memm) {
        int n = grid.size(), m = grid[0].size(); // Grid dimensions

        // Base Case: If we reach the bottom-right cell, return its value
        if (i == n - 1 && j == m - 1) 
            return grid[i][j];

        // If we go out of bounds, return a large value (infinity)
        if (i >= n || j >= m) 
            return INT_MAX;

        // If already computed, return stored result
        if (memm[i][j] != -1) 
            return memm[i][j];

        // Recurrence relation: Min of right and down moves + current cell
        return memm[i][j] = grid[i][j] + min(pathSum(i+1, j, grid, memm), pathSum(i, j+1, grid, memm));
    }
};
