class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0, count = 0;
        for(int i = 0, n = nums.size(); i < n; ++i){
            if(nums[i]){
                ++count;
                ans = max(ans , count);
            }
            else count = 0;
        }
        return ans;
    }
};