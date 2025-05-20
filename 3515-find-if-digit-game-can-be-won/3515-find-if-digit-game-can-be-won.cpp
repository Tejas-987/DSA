class Solution {
public:    
    bool canAliceWin(vector<int>& nums) {
    int sum = 0;
    int sum2 = 0;
    int n=nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i]<10) 
                sum = sum + nums[i];
            else 
                sum2 = sum2 + nums[i];
    }
    if (sum > sum2 || sum2 > sum) {
        return true;
    }
    return false;
    }
};