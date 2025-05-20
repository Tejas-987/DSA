class Solution {
public:
    // Custom lower_bound using binary search
    int lowerBound(vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1, ans = n;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lowerBound(nums, target);
        int last = lowerBound(nums, target + 1) - 1;

        // Check if the target actually exists
        if (first == nums.size() || nums[first] != target)
            return {-1, -1};

        return {first, last};
    }
};
