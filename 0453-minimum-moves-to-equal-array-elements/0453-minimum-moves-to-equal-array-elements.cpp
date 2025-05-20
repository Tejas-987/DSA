class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int y = accumulate(nums.begin(),nums.end(),0);
        int o= *min_element(nums.begin(),nums.end());
        return y-o*n;
    }
};