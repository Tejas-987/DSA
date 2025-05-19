class Solution {
public:
    // O(numRows^2) & O(numRows^2)
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascalTable;

        for(int r=0; r < numRows; r++) {
            pascalTable.push_back(vector<int>(r+1, 1));

            for(int c=1; c < r; c++) {
                pascalTable[r][c] = pascalTable[r-1][c] + pascalTable[r-1][c-1];
            }
        }

        return pascalTable;
    }
};