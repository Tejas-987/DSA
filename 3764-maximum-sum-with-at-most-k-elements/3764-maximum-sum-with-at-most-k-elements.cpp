#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        priority_queue<pair<int, int>> pq;
        int n = grid.size();
        int m = grid[0].size();

        // Corrected loop structure
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                pq.push({grid[i][j], i});  // Insert values into max-heap
            }
        }

        long long ans = 0;
        while (!pq.empty()) {
            if (k == 0) break;  // Stop if we have taken k elements

            int rowIndex = pq.top().second;
            int value = pq.top().first;
            pq.pop();

            if (limits[rowIndex] > 0) {  // Check if we can take an element from this row
                ans += value;
                limits[rowIndex]--;
                k--;
            }
        }

        return ans;
    }
};
