class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";  // Handle empty string edge case

        vector<vector<bool>> dp(n, vector<bool>(n, false));
        array<int, 2> ans = {0, 0};  // Initialize to first char

        // Single character substrings are palindromes
        for (int i = 0; i < n; ++i) {
            dp[i][i] = true;
        }

        // Two consecutive characters
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] == s[i + 1]) {
                dp[i][i + 1] = true;
                ans = {i, i + 1};  // Fix updating ans
            }
        }

        // Substrings of length 3 or more
        for (int diff = 2; diff < n; ++diff) {
            for (int i = 0; i < n - diff; ++i) {
                int j = i + diff;
                if (s[i] == s[j] && dp[i + 1][j - 1]) {
                    dp[i][j] = true;
                    ans = {i, j};  // Update ans to latest valid palindrome
                }
            }
        }

        return s.substr(ans[0], ans[1] - ans[0] + 1);
    }
};
