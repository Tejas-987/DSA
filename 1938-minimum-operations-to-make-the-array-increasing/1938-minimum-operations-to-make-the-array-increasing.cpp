class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size();i++){
            int j=nums[i];
            nums[i]=max(nums[i-1]+1,nums[i]);
            ans+=(nums[i]-j);
        }
        return ans;
    }
};