#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    int findMaxLength(std::vector<int>& nums) {
        std::unordered_map<int, int> mp;
        int maxLen = 0;
        int count = 0;

        mp[0] = -1; // Initialize with a count of 0 at index -1

        for (int i = 0; i < nums.size(); ++i) {
            // Increment count for 1s, decrement for 0s
            count += (nums[i] == 1) ? 1 : -1;

            // If count is seen before, calculate the length of the subarray
            if (mp.find(count) != mp.end()) {
                maxLen = std::max(maxLen, i - mp[count]);
            } else {
                // Store the count along with its index
                mp[count] = i;
            }
        }

        return maxLen;
    }
};
