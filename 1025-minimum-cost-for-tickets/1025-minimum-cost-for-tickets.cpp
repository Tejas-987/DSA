#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& cost) {
        int ls = days[days.size() - 1];  // Last travel day
        vector<int> dp(ls + 1, 0);  // DP array to store min cost till each day

        int i = 0;  // Pointer to travel days
        for (int day = 1; day <= ls; day++) {
            if (day < days[i]) {
                dp[day] = dp[day - 1];  // No travel, same cost as previous day
            } else {
                // Choose the minimum cost ticket for the current travel day
                dp[day] = min({dp[day - 1] + cost[0], 
                               dp[max(0, day - 7)] + cost[1], 
                               dp[max(0, day - 30)] + cost[2]});
                i++;  // Move to the next travel day
            }
        }
        return dp[ls];  // Min cost to cover all travel days
    }
};
