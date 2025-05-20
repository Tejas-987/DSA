class Solution {
public:
    int longestSubsequence(vector<int>& arr, int k) {
        unordered_map<int, int> dp;
        int max_length = 1;

        for (int num : arr) {
            dp[num] = dp[num - k] + 1;
            max_length = max(max_length, dp[num]);
        }

        return max_length;
    }
};
