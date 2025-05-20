#define ll long long int
class Solution {
public:
    long long mostPoints(vector<vector<int>>& q) {
        vector<ll> dp(q.size(), -1); // Use ll for large values
        return help(0, q, dp);
    }

    ll help(int idx, vector<vector<int>>& q, vector<ll>& dp) {
        if (idx >= q.size()) return 0; // Base case: out of bounds
        if (dp[idx] != -1) return dp[idx]; // Memoization check

        // Take the current question
        ll take = q[idx][0] + help(idx + q[idx][1] + 1, q, dp);

        // Skip the current question
        ll skip = help(idx + 1, q, dp);

        return dp[idx] = max(take, skip);
    }
};
