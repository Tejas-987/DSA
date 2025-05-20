class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if (k < 0) return 0;  // No pairs possible if k is negative

        map<int, int> mp;
        int c = 0;

        // Count the frequency of each number in the array
        for (int num : nums) {
            mp[num]++;
        }

        // Iterate over the unique elements in the map
        for (auto& [num, freq] : mp) {
            if (k == 0) {
                // If k is 0, we need at least two of the same number to form a pair
                if (freq > 1) c++;
            } else {
                // If k is not 0, we check for num + k in the map
                if (mp.find(num + k) != mp.end()) c++;
            }
        }

        return c;
    }
};
