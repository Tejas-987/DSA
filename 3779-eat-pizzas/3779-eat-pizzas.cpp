#include <vector>
#include <algorithm>

class Solution {
public:
    long long maxWeight(std::vector<int>& p) {
        std::sort(p.begin(), p.end());  // Sorting in ascending order
        int n = p.size();
        int days = n / 4, curr = n - 1;

        long long tot = 0;
        for (int i = 1; i <= days; i += 2) {  // Loop structure fixed
            tot += p[curr--];  // Odd-numbered days → Add max (Z)
        }
        for (int i = 2; i <= days; i += 2) {  // Even-numbered days → Add second max (Y)
            tot += p[curr - 1];  
            curr -= 2;  // Move back correctly
        }
        return tot;  // Fixed typo in return
    }
};
