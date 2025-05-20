class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX; // Initialize ans to maximum value
        int i = 0;
        int sum = 0;
        int n = nums.size();

        for (int j = 0; j < n; j++) {
            sum += nums[j]; // Add current element to the sum
            
            // Check if sum is greater than or equal to target
            while (sum >= target) {
                ans = min(ans, j - i + 1); // Update ans if current length is smaller
                sum -= nums[i++]; // Remove elements from the beginning until sum is less than target
            }
        }

        return (ans != INT_MAX) ? ans : 0; // Return ans if it's updated, otherwise return 0
    }
};
