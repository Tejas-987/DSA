class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        map<int, int> mp;
        
        // Count occurrences of each number in the grid
        for (auto rows : grid) {
            for (auto i : rows) {
                mp[i]++;
            }
        }

        int rep, mis;
        // Now find the repeated and missing values
        for (int i = 1; i <= n * n; i++) {  // Loop should go from 1 to n*n
            if (mp[i] == 2) {
                rep = i;  // This number appears twice
            }
            if (mp[i] == 0) {
                mis = i;  // This number does not appear at all
            }
        }

        return {rep, mis};
    }
};
