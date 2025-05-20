class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> ops(n + 1, 0);  // Difference array

        // Apply difference array technique for range updates
        for (const auto& q : queries) {
            int l = q[0], r = q[1];
            ops[l]++;
            if (r + 1 < n) ops[r + 1]--;
        }

        // Convert difference array to prefix sum to get operation counts
        int currOps = 0;
        for (int i = 0; i < n; ++i) {
            currOps += ops[i];
            if (currOps < nums[i]) return false;
        }

        return true;
    }
};
