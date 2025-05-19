class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end());
        int closestSum = INT_MAX; // Initialize closestSum to a large value
        int minDiff = INT_MAX;    // Initialize minDiff to a large value
        for (int i = 0; i < nums.size() - 2; ++i) {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                int diff = abs(sum - target);
                if (diff < minDiff) {
                    minDiff = diff;
                    closestSum = sum;
                }
                if (sum < target)
                    left++;
                else
                    right--;
            }
        }
        return closestSum;
    }
};