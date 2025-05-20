class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Step 1: Sort the array
        vector<int> result(nums.size());
        int left = 0, right = (nums.size() + 1) / 2, index = 0;

        // Step 2: Interleave elements from both halves
        while (right < nums.size()) {
            result[index++] = nums[left++];
            result[index++] = nums[right++];
        }
        if (index < nums.size()) result[index] = nums[left]; // Handle odd-length arrays

        return result;
    }
};
