class Solution {
public:
    // Manual lower_bound using binary search
    int lowerBound(vector<int>& nums, int target) {
        int low = 0, high = nums.size();  // notice high = size
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid;
        }
        return low;  // index of first element >= target
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int first = lowerBound(nums, target);

        // Check if target doesn't exist
        if (first == nums.size() || nums[first] != target)
            return {-1, -1};

        // Use lowerBound on (target + 1) to find last occurrence
        int last = lowerBound(nums, target + 1) - 1;

        return {first, last};
    }
};
